/*
#Scott Wolfe
#CS2750 PA 4
#Date 10/14/2018

*/
#include "max.h"

float max(float a[], int n)
{
	float max = a[0];
	int i;

	for(i = 0;i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];		
		}
	}

	return max;
}
