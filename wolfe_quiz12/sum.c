/*
#Scott Wolfe
#CS2750 Quiz 12
#Date 11/8/2018

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, int argv[])
{
	int *nums = malloc(argc * sizeof(int));
	nums = &argv;
	int sum = 0;
	int i;

	for( i=0;i<argc;i++ )
	{
		sum += nums[i];
	}
	free(nums);
	printf("%d\n", sum);
	return sum;
}
