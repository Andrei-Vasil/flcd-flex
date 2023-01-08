flex lex.l
gcc -Wall -c lex.yy.c
gcc -Wall lex.c lex.yy.o
./a.out < $1 > out.txt