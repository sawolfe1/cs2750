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
	int account, i;
	float amount;
	
	printf("Enter account number:\n");
	scanf("%d", &account);	
	printf("Enter withdrawal amount:\n");
	scanf("%f", &amount);

	for(i=0; i<accounts; i++)
        {
                if(customers[i].accountNumber == account)
                {
                        customers[i].accountBalance -= amount;
                        printf("%.2f withdrawn from account number %d\n", amount, account);
                }
        }

        main();
}

