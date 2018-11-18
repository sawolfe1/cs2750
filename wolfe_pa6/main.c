/*
#Scott Wolfe
#CS2750 PA 6
#Date 11/17/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "menu.h"
#include "deposit.h"
#include "withdrawal.h"
#include "add_account.h"
#include "remove_account.h"
#include "balance_inquiry.h"
#include "view_accounts.h"
#include "logCustomers.h"

Customer customers[] = {};

int accounts = sizeof(customers)/sizeof(Customer);

void main()
{	
//	printf(" %d\n", accounts);
	if(accounts < 1)
	{
		readCustomers();	
	}
//	printf(" %d\n", accounts);

	int i, choice;
	int menuLength = 7;
	Menu bankMenu[] = {
		{0, "Exit"},
		{1, "Deposit"},
		{2, "Withdrawal"},
		{3, "Add Account"},
		{4, "Remove Account"},
		{5, "Balance Inquiry"},
		{6, "View Accounts"}
	 };

	printf("Choose A Menu Option:\n");
	for(i=0;i<menuLength;i++)
	{	
		printf("%d. %s\n", bankMenu[i].idx, bankMenu[i].option);
	}

	scanf("%d", &choice);
	printf("You have chosen %s\n", bankMenu[choice].option);

	if (choice == 0) { return; } else if(choice == 1){deposit();}
	else if(choice == 2){withdrawal();} else if(choice == 3){add_account();}
	else if(choice == 4){remove_account();} else if(choice == 5){balance_inquiry();}
	else if(choice == 6){view_accounts();} 
	else{
		printf("You have to choose a menu option\n");
	}

}
