#!/usr/bin/env bash
ROOT=$(cd "$(dirname "$0")";pwd)

rm -rf ${ROOT}/build
mkdir ${ROOT}/build
cd ${ROOT}/build/
cmake ..
make
cd ..
