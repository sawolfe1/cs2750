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
	//printf("%s: %d\n", customers[0].firstName, customers[0].accountNumber);
	int i, account;

	//printf("Enter account number:\n");
        //scanf("%d", &account);
	printf("%d\n", accounts);	
	for(i=0;i<accounts;i++)
	{
		printf("%s\n", customers[i].firstName);
		printf("%c\n", customers[i].middleInitial);
		printf("%s\n", customers[i].lastName);
		printf("%d\n", customers[i].accountNumber);
		printf("%.2f\n\n", customers[i].accountBalance);
		
		//if (account == customers[i].accountNumber)
		//{
		//}
	}
	main();
}
