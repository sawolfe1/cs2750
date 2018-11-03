/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int sum(int argc, int argv[])
{
	int sum = 0;
	int i;

	for( i=0;i<argc;i++ )
	{
		sum += argv[i];
	}
	return sum;
}
