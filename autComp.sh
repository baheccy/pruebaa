#!/bin/bash

cd ~/codigo/;
cmake -S . -B build
cmake --build build

./main