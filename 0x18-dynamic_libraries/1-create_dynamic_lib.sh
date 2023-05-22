#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -o liball.so *.o
