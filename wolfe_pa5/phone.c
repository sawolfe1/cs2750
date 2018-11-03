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
	char phoneNumber[200];
	size_t length;

	printf("Enter your phone number:\n");
	scanf(" %s", phoneNumber);

	length = strlen(phoneNumber);
	if(length < 10)
	{
		printf("Enter 10 digits please!\n");
		return;
	}
	phone_fmt(phoneNumber);
}
