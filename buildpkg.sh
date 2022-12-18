#!/bin/bash 

version=3.5.1

builddir=/tmp/libcalceph  # Be sure this is set to a non existent directory, it is removed after the run!

arch=$(arch)

# adjuste here the target you want to crossbuild

unset make_linux32
unset make_linux64
unset make_linuxarm
unset make_linuxaarch64

if [[ $arch == i686 ]]; then 
   make_linux32=1
fi
if [[ $arch == x86_64 ]]; then 
   make_linux64=1
fi
if [[ $arch == armv7l ]]; then 
   make_linuxarm=1
fi
if [[ $arch == aarch64 ]]; then 
   make_linuxaarch64=1
fi


save_PATH=$PATH
wd=`pwd`

currentrev=$(git rev-list --count --first-parent HEAD)
if [[ -z $currentrev ]]; then currentrev=1; fi

# delete old files
  rm libcalceph*.xz
  rm libcalceph*.deb
  rm libcalceph*.rpm
  rm -rf $builddir

# make Linux i386 version
if [[ $make_linux32 ]]; then
  make CPU_TARGET=i386 OS_TARGET=linux clean
  make CPU_TARGET=i386 OS_TARGET=linux
  if [[ $? -ne 0 ]]; then exit 1;fi
  make install PREFIX=$builddir
  # tar
  cd $builddir
  cd ..
  tar cvJf libcalceph-$version-$currentrev-linux_i386.tar.xz libcalceph
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.tar.xz $wd
  if [[ $? -ne 0 ]]; then exit 1;fi
  # deb
  cd $wd
  rsync -a --exclude=.svn system_integration/Linux/debian $builddir
  cd $builddir
  mkdir debian/libcalceph/usr
  mv lib debian/libcalceph/usr/
  mv share debian/libcalceph/usr/
  cd debian
  sz=$(du -s libcalceph/usr | cut -f1)
  sed -i "s/%size%/$sz/" libcalceph/DEBIAN/control
  sed -i "/Version:/ s/1/$version-$currentrev/" libcalceph/DEBIAN/control
  fakeroot dpkg-deb -Zxz --build libcalceph .
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.deb $wd
  if [[ $? -ne 0 ]]; then exit 1;fi

  cd $wd
  rm -rf $builddir
fi

# make Linux x86_64 version
if [[ $make_linux64 ]]; then
  make CPU_TARGET=x86_64 OS_TARGET=linux clean
  make CPU_TARGET=x86_64 OS_TARGET=linux
  if [[ $? -ne 0 ]]; then exit 1;fi
  make install PREFIX=$builddir
  if [[ $? -ne 0 ]]; then exit 1;fi
  # tar
  cd $builddir
  cd ..
  tar cvJf libcalceph-$version-$currentrev-linux_x86_64.tar.xz libcalceph
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.tar.xz $wd
  if [[ $? -ne 0 ]]; then exit 1;fi
  # deb
  cd $wd
  rsync -a --exclude=.svn system_integration/Linux/debian $builddir
  cd $builddir
  mkdir debian/libcalceph64/usr
  mv lib debian/libcalceph64/usr/
  mv share debian/libcalceph64/usr/
  cd debian
  sz=$(du -s libcalceph64/usr | cut -f1)
  sed -i "s/%size%/$sz/" libcalceph64/DEBIAN/control
  sed -i "/Version:/ s/1/$version-$currentrev/" libcalceph64/DEBIAN/control
  fakeroot dpkg-deb -Zxz --build libcalceph64 .
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.deb $wd
  if [[ $? -ne 0 ]]; then exit 1;fi

  cd $wd
  rm -rf $builddir
fi

# make Linux arm version
if [[ $make_linuxarm ]]; then
  make CPU_TARGET=armv7l OS_TARGET=linux clean
  make CPU_TARGET=armv7l OS_TARGET=linux
  if [[ $? -ne 0 ]]; then exit 1;fi
  make install PREFIX=$builddir
  if [[ $? -ne 0 ]]; then exit 1;fi
  # tar
  cd $builddir
  cd ..
  tar cvJf libcalceph-$version-$currentrev-linux_armhf.tar.xz libcalceph
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.tar.xz $wd
  if [[ $? -ne 0 ]]; then exit 1;fi
  # deb
  cd $wd
  rsync -a --exclude=.svn system_integration/Linux/debian $builddir
  cd $builddir
  mkdir debian/libcalcepharm/usr
  mv lib debian/libcalcepharm/usr/
  mv share debian/libcalcepharm/usr/
  cd debian
  sz=$(du -s libcalcepharm/usr | cut -f1)
  sed -i "s/%size%/$sz/" libcalcepharm/DEBIAN/control
  sed -i "/Version:/ s/1/$version-$currentrev/" libcalcepharm/DEBIAN/control
  fakeroot dpkg-deb -Zxz --build libcalcepharm .
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.deb $wd
  if [[ $? -ne 0 ]]; then exit 1;fi

  cd $wd
  rm -rf $builddir
fi

# make Linux arm64 version
if [[ $make_linuxaarch64 ]]; then
  make CPU_TARGET=aarch64 OS_TARGET=linux clean
  make CPU_TARGET=aarch64 OS_TARGET=linux
  if [[ $? -ne 0 ]]; then exit 1;fi
  make install PREFIX=$builddir
  if [[ $? -ne 0 ]]; then exit 1;fi
  # tar
  cd $builddir
  cd ..
  tar cvJf libcalceph-$version-$currentrev-linux_arm64.tar.xz libcalceph
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.tar.xz $wd
  if [[ $? -ne 0 ]]; then exit 1;fi
  # deb
  cd $wd
  rsync -a --exclude=.svn system_integration/Linux/debian $builddir
  cd $builddir
  mkdir debian/libcalcepharm64/usr
  mv lib debian/libcalcepharm64/usr/
  mv share debian/libcalcepharm64/usr/
  cd debian
  sz=$(du -s libcalcepharm64/usr | cut -f1)
  sed -i "s/%size%/$sz/" libcalcepharm64/DEBIAN/control
  sed -i "/Version:/ s/1/$version-$currentrev/" libcalcepharm64/DEBIAN/control
  fakeroot dpkg-deb -Zxz --build libcalcepharm64 .
  if [[ $? -ne 0 ]]; then exit 1;fi
  mv libcalceph*.deb $wd
  if [[ $? -ne 0 ]]; then exit 1;fi

  cd $wd
  rm -rf $builddir
fi

cd $wd

