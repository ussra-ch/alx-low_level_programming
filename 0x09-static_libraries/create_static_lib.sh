#!/bin/bash
gcc -WELL -pedantic -Werror -Wextra -c *.c
:wq
ar -rc liball.a *.o
ranlib liball.a
