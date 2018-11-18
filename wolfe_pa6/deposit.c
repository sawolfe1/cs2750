/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include "deposit.h"
#include "customer.h"

extern Customer customers[];
extern int accounts;

void deposit()
{
	int account, i, isDeposited = 0;
	float amount;

        printf("Enter account number: ");

        if ( scanf("%d", &account) != 1 )
        { printf("Enter a numeric value for account\n"); return; }

        printf("Enter deposit amount: ");

	if( scanf("%f", &amount) !=1 )
	{	
		printf("Please enter a numeric value for deposit amount\n");
		return;
	}	

	for(i=0; i<accounts; i++)
	{
		if(customers[i].accountNumber == account)
		{
			customers[i].accountBalance += amount;
			logCustomers();
			printf("%.2f deposited to account number %d\n", amount, account);
			isDeposited += 1;
		}
	}

	if(isDeposited == 0)
	{ printf("No account number matches your entry\n"); }

        main();
}
