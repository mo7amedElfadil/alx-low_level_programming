#!/bin/bash
wget -q -O /tmp/rand.so "https://github.com/mo7amedElfadil/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand.so"
export LD_PRELOAD=/tmp/rand.so
