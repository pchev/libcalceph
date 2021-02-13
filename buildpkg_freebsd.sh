#!/bin/bash 

version=3.4.7

builddir=/tmp/libcalceph  # Be sure this is set to a non existent directory, it is removed after the run!

arch=$(uname -m)

wd=`pwd`

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

