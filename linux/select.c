#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int file1, file2;
	fd_set origin_set, ready_set;
	int i;
	char buf[1024];

	file1 = open("file1", O_RDWR);
	file2 = open("file2", O_RDWR);

	FD_ZERO(&origin_set);
	FD_SET(file1, &origin_set);
	FD_SET(file2, &origin_set);
	for (i=0; i<10; i++) {
		ready_set = origin_set;
		select(file2+1, &ready_set, NULL, NULL, NULL);
		if (FD_ISSET(file1, &ready_set)) {
			read(file1, buf, 1024);
			printf("file1: %s\n", buf);
		}
		if (FD_ISSET(file2, &ready_set)) {
			read(file2, buf, 1024);
			printf("file2: %s\n", buf);
		}
	}

	return 0;
}