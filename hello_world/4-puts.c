#!/bin/bash
echo '#include <stdio.h> int main(void) { puts("Programming is like building a multilingual puzzle"); return 0; }' > puzzle.c && gcc -Wall -Werror -Wextra -pedantic -std=gnu89 puzzle.c -o puzzle && ./puzzle

