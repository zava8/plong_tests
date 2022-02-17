#!/bin/bash

echo "building and installing cplong library."
make
sudo mv libplong.so /usr/lib/
sudo cp cplong.h /usr/include/
echo "finished installing.  to use library, add '-lplong' as a flag"
