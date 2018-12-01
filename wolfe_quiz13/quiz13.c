#include <stdio.h>

void main()
{
	int pid = fork();
	FILE *f;

	f = fopen("output.txt", "w");
	fprintf(f, "Child Process - pid: %d, ppid: %d \n", getpid(), getppid());
	printf("pid: %d, ppid: %d \n", getpid(), getppid());
	fclose(f);
}
