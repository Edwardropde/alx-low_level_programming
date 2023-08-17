#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
<<<<<<< HEAD
ar -rc liball.a *.o
=======
ar rc liball.a *.o
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
ranlib liball.a
