/*
#Scott Wolfe
#CS2750 PA 4
#Date 10/14/2018

*/
#include "min.h"

float min(float a[], int n)
{
	float min = a[0];
        int i;

        for(i = 0;i < n; i++)
        {
                if(a[i] < min)
                {
                        min = a[i];
                }
        }

        return min;	
}
