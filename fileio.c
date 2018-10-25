#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
  	char *p = calloc(100,sizeof(char));
	int fileR = open("fileBegin.txt", O_RDWR); // gives read and write access
	int f1 =  read(fileR,p,100); //Testing out read
	printf("Testing the reading file:\n%s", p); 

  	char *r = calloc(100,sizeof(char));
	int fileW = open("fileEnd.txt", O_RDWR); // gives read and write access
	write(fileW, "wow\n", 4);
	close(fileW);

	int fileW2 = open("fileEnd.txt", O_RDWR); // gives read and write access
	int f2 =  read(fileW,r,100); //Testing out read
	printf("Adding the line wow: \n");
	printf("Testing the writing file:\n%s", r); 	


	close(fileR);
	close(fileW2);
	return 0;
}
