/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include "withdrawal.h"

void withdrawal()
{	
	int account, amount;
	
	printf("Enter account number:\n");
	scanf("%d", &account);	
	printf("Enter withdrawal amount:\n");
	scanf("%d", &amount);

	printf("%d withdrawn from account number %d\n", amount, account);

	return;
}

