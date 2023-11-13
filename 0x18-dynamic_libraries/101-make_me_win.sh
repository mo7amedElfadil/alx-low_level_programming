#!/bin/bash
wget -P /tmp/ https://github.com/mo7amedElfadil/alx-low_level_programming/raw/main/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=tmp/rand.so
