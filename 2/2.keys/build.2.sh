#!/bin/bash

clang -c main.c
clang -c func.c
clang main.o func.o -o app
