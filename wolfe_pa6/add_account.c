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
	int account, i;
	float balance;
	
	printf("Enter your first name: ");
	scanf("%s", first);

	printf("Enter your middle initial: ");	
	scanf(" %c", &initial); 

	printf("Enter your last name: ");
	scanf("%s", last);

	printf("Enter your account number: ");
	if ( scanf("%d", &account) != 1 )
        { printf("Enter a numeric value for account\n"); return; }

	printf("Enter your account balance: ");
	if( scanf("%f", &balance) != 1 )
        {
                printf("Please enter a numeric value for balance\n");
                return;
        }

	for(i=0; i<accounts; i++)
	{
		if(customers[i].accountNumber == account)
		{
			 printf("=======\nAccount already exists\n=======\n");
			 return;
		}
	}

	size_t newSize = accounts + 1;
	Customer *newCustomer = (Customer *)malloc(sizeof(Customer));

	strcpy(newCustomer->firstName, first);
	strcpy(newCustomer->lastName, last);
	newCustomer->middleInitial = initial;
	newCustomer->accountNumber = account;
	newCustomer->accountBalance = balance;
	
	customers[accounts] = *newCustomer;
	accounts = newSize;
	
	free(newCustomer);
	printf("=======\nNew account created\n=======\n");
	logCustomers();
	main();
}
