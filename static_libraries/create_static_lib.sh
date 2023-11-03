# This is a bash script that creates a static library called liball.c

#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

ar rc liball.a *.o

ranlib liball.a
