/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include "add_account.h"
#include "customer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern Customer customers[];
extern int accounts;

void add_account() 
{	
	char first[30];
	char initial;
	char last[30];
	int account;
	float balance;
	size_t newSize = accounts + 1;
	
	printf("Enter your first name:\n");
	scanf("%s", first);
	printf("Enter your middle initial:\n");	
	scanf(" %c", &initial);
	printf("Enter your last name:\n");
	scanf("%s", last);
	printf("Enter your account number:\n");
	scanf("%d", &account);
	printf("Enter your account balance:\n");
	scanf("%f", &balance);
	
	Customer *newCustomer = (Customer *)malloc(sizeof(Customer));

	strcpy(newCustomer->firstName, first);
	strcpy(newCustomer->lastName, last);
	newCustomer->middleInitial = initial;
	newCustomer->accountNumber = account;
	newCustomer->accountBalance = balance;
	
	customers[accounts] = *newCustomer;
	accounts = newSize;
	
	free(newCustomer);
	main();
}
