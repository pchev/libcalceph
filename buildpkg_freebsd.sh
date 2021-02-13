#!/bin/bash 

version=3.4.7

builddir=/tmp/libcalceph  # Be sure this is set to a non existent directory, it is removed after the run!

arch=$(uname -m)

wd=`pwd`

# check if new revision since last run
read lastrev <last.build
currentrev=$(LANG=C svn info . | grep Revision: | sed 's/Revision: //')
if [[ -z $currentrev ]]; then 
 currentrev=0
fi
echo $lastrev ' - ' $currentrev
if [[ $lastrev -ne $currentrev ]]; then

# delete old files
  rm libcalceph*.xz
  rm -rf $builddir

# make FreeBSD version
  gmake clean all
  if [[ $? -ne 0 ]]; then exit 1;fi
  gmake install PREFIX=$builddir
  if [[ $? -ne 0 ]]; then exit 1;fi
  # tar
  cd $builddir
  cd ..
  tar cvJf libcalceph-$version-$currentrev-FreeBSD_$arch.tar.xz libcalceph
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.tar.xz $wd
  if [[ $? -ne 0 ]]; then exit 1;fi

cd $wd
rm -rf $builddir

# store revision 
  echo $currentrev > last.build
else
  echo Already build at revision $currentrev
  exit 4
fi

