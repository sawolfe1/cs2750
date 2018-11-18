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
	
	//readCustomers();
	for(i=0;i<accounts;i++)
	{
		printf("%s\n", customers[i].firstName);
		printf("%c\n", customers[i].middleInitial);
		printf("%s\n", customers[i].lastName);
		printf("%d\n", customers[i].accountNumber);
		printf("%.2f\n\n", customers[i].accountBalance);
		
	}
	main();
}
