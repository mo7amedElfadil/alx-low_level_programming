#!/bin/bash
curl -O  https://github.com/mo7amedElfadil/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/rand.so
