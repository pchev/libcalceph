#!/bin/bash

destdir=$PREFIX

if [ -z "$destdir" ]; then
   export destdir=/tmp/libcalceph
fi

echo Install libcalceph to $destdir

install -m 755 -d $destdir
install -m 755 -d $destdir/lib
install -m 755 -d $destdir/share
install -m 755 -d $destdir/share/doc
install -m 755 -d $destdir/share/doc/libcalceph1

install -v -m 644 -s calceph/libcalceph.so.*  $destdir/lib/
install -v -m 644 changelog $destdir/share/doc/libcalceph1/changelog
install -v -m 644 copyright $destdir/share/doc/libcalceph1/copyright

cd $destdir/lib
ln -s libcalceph.so.1.1 libcalceph.so.1

