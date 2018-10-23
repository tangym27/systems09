#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  char sent[20] = "Hi world";
  char *p = calloc(75,sizeof(char));
  int file = open("zhou_garvey.txt",O_RDWR);
  int f =  read(file,p,75);
  printf("reading file %s",p);
  close(file);
  return 0;
}
