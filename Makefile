output: linkedlist.o node.o main.c
	gcc -Wall -Wextra -fsanitize=address linkedlist.c node/node.c main.c -o output

node.o: node/node.c node/node.h
	gcc -c node/node.c

clean:
	rm *.o output

.SILENT:
	output
	clean