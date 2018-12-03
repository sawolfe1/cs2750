/*
#Scott Wolfe
#CS2750 Bonus
#Date 12/2/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int pid = fork();

	if (pid < 0){
		perror("Fork has failed!");
	} else if (pid == 0) {
		execvp("./square", argv);
	}
	wait(NULL);
	printf("Parent pid: %d ppid: %d date: \n", getpid(), getppid());
	return 0;
}
