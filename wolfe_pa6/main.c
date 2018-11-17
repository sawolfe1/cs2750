/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "menu.h"

void main(int argc, char *argv[])
{
	int i;
	int menuLength = 7;
	struct menu bankMenu[] = {
		{0, "Exit"},
		{1, "Deposit"},
		{2, "Withdrawal"},
		{3, "Add Account"},
		{4, "Remove Account"},
		{5, "Balance Inquiry"},
		{6, "View Accounts"}
	 };

	printf("Choose A Menu Option\n");
	for(i=0;i<menuLength;i++)
	{	
		printf("%d. %s\n", bankMenu[i].idx, bankMenu[i].option);
	}
		

//	printf("0. Exit\n");
//	printf("1. Deposit\n");
//	printf("2. Withdrawal\n");
//	printf("3. Add Account\n");
//	printf("4. Remove Account\n");
//	printf("5. Balance Inquiry\n");
//	printf("6. View Accounts\n");

}
