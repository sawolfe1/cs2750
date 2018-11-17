/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include "deposit.h"

void deposit()
{
	int account, amount;

        printf("Enter account number:\n");
        scanf("%d", &account);
        printf("Enter deposit amount:\n");
        scanf("%d", &amount);

        printf("%d deposited to account number %d\n", amount, account);

        return;
}
