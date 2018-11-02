/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int sum(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *val;

	for( i=0;i<argc;i++ )
	{
		val = argv[i];
		if( isdigit(*val) )
		{
			sum += atoi(val);
		}
	}
	return sum;
}
