/*
#Scott Wolfe
#CS2750 PA 4
#Date 10/14/2018

*/
#include "avg.h"

float avg(float a[], int n)
{
	float sum = 0.00000f;
        int i;

        for(i=0;i<n;i++)
        {
                sum += a[i];
        }

        return sum/n;
}
