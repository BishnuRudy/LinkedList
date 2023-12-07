
output: main.o linkedlist.o
	gcc -Wall -Wextra -fsanitize=address  main.c linkedlist.c -o output


clean:
	rm *.o output

.SILENT:
	output
	clean
