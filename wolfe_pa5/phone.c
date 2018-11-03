/*
#Scott Wolfe
#CS2750 PA 5
#Date 11/1/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone_fmt.h"

void main()
{
	char input[200];
	char phoneNumber[200];
	size_t inputLength;
	size_t phoneNumberLength;
	int i, j = 0;
	char val;

	printf("Enter your phone number:\n");
	scanf("%s", input);

	inputLength = strlen(input);	
	for(i=0;i<inputLength;i++)
	{
		val = input[i];
		if(isdigit(val))
		{
			phoneNumber[j] = val;
			j += 1;
		}
	}

	phoneNumberLength = strlen(phoneNumber);
	if(phoneNumberLength < 10)
	{
		printf("ERROR: Enter 10 digits with no spaces please!\n");
		return;
	}
	phone_fmt(phoneNumber);
}
