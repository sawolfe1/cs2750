/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone_fmt.h"

void phone_fmt(char argv[])
{
	char formatted[14];
	int i, j = 1;
	formatted[0] = '(';

	for(i=0;i<11;i++)
	{		
		if(j==4)
		{
			formatted[j] = ')';
			j += 1;
		}
		if(j==8)
		{
			formatted[j] = '-';
			j += 1;
		}
		formatted[j] = argv[i];
		j += 1;
	}
	printf("%s\n", formatted);
}
