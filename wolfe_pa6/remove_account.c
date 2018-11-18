/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include "remove_account.h"
#include "customer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern Customer customers[];
extern int accounts;

void remove_account()
{
	int account, i, isChanged = 0;
        FILE *outfile;
        outfile = fopen("accounts.dat", "w");

	printf("Enter account number to remove:\n");
	if ( scanf("%d", &account) != 1 )
        { printf("Enter a numeric value for account\n"); return; }

        for(i=0; i<accounts; i++)
        {
		if(customers[i].accountNumber != account)
		{
                	fwrite(&customers[i], sizeof(Customer), 1, outfile);
		}
		else { isChanged += 1; }
        }

	if(isChanged == 0)
        { printf("No account number matches your entry\n"); return; }
	else { printf("Customer removed\n"); }

        fclose(outfile);

	readCustomers();
	main();
}
