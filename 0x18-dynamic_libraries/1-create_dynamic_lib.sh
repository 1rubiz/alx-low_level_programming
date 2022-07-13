#!bin/bash
gcc -WALL -fPIC *.c || gcc -shared -Wl,-soname,liball.so -o liball.so *.o

