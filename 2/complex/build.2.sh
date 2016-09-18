#~/bin/bash

clang++ -std=c++11 -c src/main.cpp
clang++ -std=c++11 -c src/class.cpp
clang++ -std=c++11 main.o class.o -o complex
