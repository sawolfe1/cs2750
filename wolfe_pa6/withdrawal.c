/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include "withdrawal.h"
#include "customer.h"

extern Customer customers[];
extern int accounts;

void withdrawal()
{	
	int account, i, isChanged = 0;
	float amount;
	
	printf("Enter account number: ");
	if ( scanf("%d", &account) != 1 )
	{ printf("Enter a numeric value for account\n"); return; }
	
	printf("Enter withdrawal amount: ");
	if( scanf("%f", &amount) != 1 )
        {
                printf("Please enter a numeric value for amount\n");
		return;
        }

	for(i=0; i<accounts; i++)
        {
                if(customers[i].accountNumber == account)
                {
			if (customers[i].accountBalance >= amount)
			{
                        	customers[i].accountBalance -= amount;
				isChanged += 1;
			}
			else { printf("Insufficient funds\n"); return; }
                }
        }

	if(isChanged == 0)
        { printf("No account number matches your entry\n"); }
	else { logCustomers(); printf("%.2f withdrawn from account number %d\n", amount, account); }

        main();
}

