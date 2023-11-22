#!/bin/bash


git clone https://github.com/5P1AM/ctvrtecviceni

cd ctvrtecviceni

gdd program.c -o program

./program > data.csv

python3 tree.py
