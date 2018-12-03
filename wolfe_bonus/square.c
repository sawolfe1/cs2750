/*
#Scott Wolfe
#CS2750 Bonus
#Date 12/2/2018
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	num = atoi(argv[1]);

	printf("%d squared is: %d\n", num, num*num);
	printf("Child pid: %d ppid: %d date: \n", getpid(), getppid());

	return 0;
}
