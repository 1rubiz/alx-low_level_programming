#!bin/bash
gcc -WALL -fPIC -c *.c
gcc -shared -o liball.so *.o

