default:
	gcc -c -g poc.c
	gcc -o poc.out poc.o
clean:
rm -rf poc.out
