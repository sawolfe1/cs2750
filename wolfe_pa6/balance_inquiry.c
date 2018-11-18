/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include "balance_inquiry.h"
#include <stdio.h>
#include <stdlib.h>
#include "customer.h"

extern Customer customers[];
extern int accounts;

void balance_inquiry()
{
	int account, i;
	float amount;

        printf("Enter account number:\n");
        if ( scanf("%d", &account) != 1 )
        { printf("Enter a numeric value for account\n"); return; }

        for(i=0; i<accounts; i++)
        {
                if(customers[i].accountNumber == account)		
		{
			printf("==================================================\n");	
			amount = customers[i].accountBalance;
			printf("Name: %s %c %s\n", customers[i].firstName, 
					     customers[i].middleInitial, 
					     customers[i].lastName);
                        printf("Balance = %.2f for account number %d\n", amount, account);
			printf("==================================================\n");
                }
        }

        main();
}
