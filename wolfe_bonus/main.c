/*
#Scott Wolfe
#CS2750 Bonus
#Date 12/2/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
	
	printf(" %d\n", getpid());
	int pid = fork();
	time_t now;
	time(&now);
	int status;
	
	if (pid < 0){
		perror("Fork has failed!");
	} else if (pid == 0) {
		execvp("./square", argv);
	}

	wait(&status);
	printf("Child Exit Code: %d\n", WEXITSTATUS(status));
	printf("Parent pid: %d ppid: %d date: %s", getpid(), getppid(), ctime(&now));
	printf("Parent Exit Code: %d\n", WEXITSTATUS(status));

	return 117;
}
