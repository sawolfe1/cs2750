








#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "logCustomers.h"
#include <string.h>

extern Customer customers[];
extern int accounts;

void logCustomers()
{
	int i;
	FILE *outfile;

	outfile = fopen("accounts.dat", "w");
	
	for(i=0; i<accounts; i++)
	{
		fwrite(&customers[i], sizeof(Customer), 1, outfile);
	}

	fclose(outfile);
	return;
}

void readCustomers()
{
	FILE *infile;
	Customer input;
	int i = 0;
	Customer *newCustomer = (Customer *)malloc(sizeof(Customer));
	infile = fopen("accounts.dat", "r");

	while(fread(&input, sizeof(Customer), 1, infile))
	{
		strcpy(newCustomer->firstName, input.firstName);
	        strcpy(newCustomer->lastName, input.lastName);
	        newCustomer->middleInitial = input.middleInitial;
	        newCustomer->accountNumber = input.accountNumber;
	        newCustomer->accountBalance = input.accountBalance;

        	customers[i] = *newCustomer;
		
		i+=1;
	}

	accounts += i;
	free(newCustomer);
	fclose(infile);
	return;
}
