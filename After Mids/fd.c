#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fd;
	int fd1;
	int fd2;

	char a='A';
	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	fd1 = open("abc.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	fd2 = open("xyz.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
		

	printf("fd = %d\n", fd);
	printf("fd = %d\n", fd1);
	printf("fd = %d\n", fd2);






	write(fd,&a,sizeof(a));
	a++;
	write(fd1,&a,sizeof(a));
	a++;
	write(fd2,&a,sizeof(a));


	close(fd);
	return (0);
}