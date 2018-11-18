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
	int account, i;
	float amount;

        printf("Enter account number:\n");
        scanf("%d", &account);
        printf("Enter deposit amount:\n");
        scanf("%f", &amount);
	
	for(i=0; i<accounts; i++)
	{
		if(customers[i].accountNumber == account)
		{
			customers[i].accountBalance += amount;
			printf("%.2f deposited to account number %d\n", amount, account);
		}
	}

        main();
}
