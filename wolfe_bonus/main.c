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
	
	int pid = fork();
	time_t now;
	time(&now);
	int status;
	FILE *fp;
	int parentExitCode = 117;
	
	if (pid < 0){
		perror("Fork has failed!");
	} else if (pid == 0) {
		execvp("./square", argv);
	}

	wait(&status);
	fp = fopen("log.txt", "a");
	fprintf(fp, "Child Exit Code: %d\n", WEXITSTATUS(status));
	fprintf(fp, "Parent pid: %d ppid: %d date: %s", getpid(), getppid(), ctime(&now));
	
	// How can parent return its own exit code if it has exited? 
	// I manually return parent exit code below.
	fprintf(fp, "Parent Exit Code: %d\n", parentExitCode);

	return parentExitCode;
}
