# This is a bash script that creates a static library called liball.c

gcc -c *.c

ar rcs liball.a *.o

ranlib liball.a
