#!/bin/bash
gcc -shared -fPIC -o rand.so rand.c
export LD_PRELOAD=$PWD/rand.so
