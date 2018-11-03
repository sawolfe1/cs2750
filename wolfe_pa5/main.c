/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "scarecrow.h"

int main(int argc, char *argv[])
{
	int nums[argc];
	char *words[argc];
	int i = 0, numscount = 0, wordscount = 0;
	char *val;

	for(i=1; i<argc; i++)
	{
		val = argv[i];
		if( isdigit(*val) )
		{
			nums[numscount] = atoi(val);
			numscount += 1;
		//	printf(" %d\n", atoi(val));
		}
		else
		{
			words[wordscount] = val;
			wordscount += 1;
		//	printf(" %s\n", val);
		}
	}
	printf("Total sum of integers: %d\n", sum(numscount, nums));
	scarecrow(wordscount, words);
	return 0;
}
