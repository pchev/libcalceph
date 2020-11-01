#!/bin/bash

destdir=$PREFIX

if [ -z "$destdir" ]; then
   export destdir=/tmp/libcalceph
fi

echo Install libcalceph to $destdir

install -m 755 -d $destdir
install -m 755 -d $destdir/lib

install -v -m 644 -s calceph/libcalceph.so.*  $destdir/lib/

cd $destdir/lib
ln -s libcalceph.so.1.1 libcalceph.so.1

