/*
#Scott Wolfe
#CS2750 Bonus
#Date 12/2/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int num;
	num = atoi(argv[1]);
	time_t now;
        time(&now);
	FILE *fp;

	fp = fopen("log.txt", "a");

	fprintf(fp, "%d squared is: %d\n", num, num*num);
	fprintf(fp, "Child pid: %d ppid: %d date: %s", getpid(), getppid(), ctime(&now));

	return 37;
}
