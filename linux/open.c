#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int file1, file2;
	char *s1, *s2, *s3;
	int cnt1, cnt2;

	s3 = "1234567";
	s1 = s2 = "1\n2\n3\n4\n5\n6\n7\n";
	file1 = open("file1", O_WRONLY|O_TRUNC);
	file2 = open("file2", O_WRONLY|O_TRUNC);
	cnt1 = strlen(s1);
	cnt2 = strlen(s2);
	while ((cnt1-= write(file1, s1, strlen(s1))) > 0);
	while ((cnt2-= write(file2, s2, strlen(s2))) > 0);

	close(file1);
	close(file2);
	return 0;
}