#~/bin/bash

clang++ -std=c++11 -c main.cpp 
clang++ -std=c++11 -c class.cpp
clang++ -std=c++11 main.o class.o -o complex
