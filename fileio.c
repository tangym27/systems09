#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
  	char *p = calloc(75,sizeof(char));
	int file = open("zhou_garvey.txt", O_RDWR); // gives read and write access
	int f =  read(file,p,75);
	printf("reading file %s",p);
	write(file, "wow\n", 4);
	close(file);
	return 0;
}
