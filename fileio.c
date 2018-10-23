#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int file = open("zhou_garvey.txt", O_RDWR); // gives read and write access
	write(file, "wow\n", 4);
	close(file);
  return 0;
}
