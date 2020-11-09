#include <sys/io.h>

#define FIFO 0x3f5

int main(){
	int i;
	iopl(3);
	outb(0x8e,0x3f5);
	for(i=0;i<10000;i++)
		outb(0x42,0x3f5);
}
