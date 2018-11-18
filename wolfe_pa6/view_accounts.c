/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include "view_accounts.h"
#include "customer.h"

extern Customer customers[];
extern int accounts;

void view_accounts()
{
	int i, account;
	
	printf("==================================================\n");
	for(i=0;i<accounts;i++)
	{
		if(customers[i].accountNumber != 0)
		{	
			printf("--------------------------------------------------\n");
			printf("Name: %s %c. %s\n", customers[i].firstName,
					    customers[i].middleInitial,
					    customers[i].lastName);
			printf("Account: %d\n", customers[i].accountNumber);
			printf("Balance: $%.2f\n\n", customers[i].accountBalance);
		}
	}	
	printf("==================================================\n");
	main();
}
