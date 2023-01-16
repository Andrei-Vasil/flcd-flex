flex lex.l
bison -dy parser.y
gcc -Wall lex.yy.c y.tab.c -o parser.out
chmod 755 parser.out
./parser.out < $1