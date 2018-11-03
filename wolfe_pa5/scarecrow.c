/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include "scarecrow.h"
#include <string.h>

void scarecrow(int argc, char *argv[])
{
	int i, j;
	char *val, *val2, *ret;

	for( i=0;i<argc;i++ )
	{
		val = argv[i];
		for(j=i+1;j<argc;j++)
		{
			val2 = argv[j];
			ret = strstr(val2, val);
			if( ret != NULL )
			{
				printf("%s is a substring of %s\n", val, val2);
			}
		}
	}
}
