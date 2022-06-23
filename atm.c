#include <stdio.h>
int main()
{
	int option, balance=0, deposit=0, withdraw=0, pin, choice=1;
	int key=1234;
	printf("Welcome to ABC bank ATM\n\n");
	label:
	printf("Please enter your security PIN: ");
	scanf("%d",&pin);
	
	if(pin!=key) //pin validation
	{
		printf("Invalid PIN");
		return 0;
	}
	
	while(choice==1)
	{
		
		printf("\nWhat would you like to do?\n"); //option selection
		printf("1 - Checking Balance\n");
		printf("2 - Deposit money\n");
		printf("3 - Withdraw money\n");
		printf("4 - Change PIN\n");
		scanf("%d",&option);
	
	if (option==1)
		printf("\nYour account balance is $%d\n\n",balance);
		
		else if (option==2)
		{
			printf("\nHow much amount you would like to deposit: $");
			scanf("%d",&deposit);
			 if(deposit<0)
				{
					printf("Invlaid amount\n");
					break;
				}
			balance += deposit;
			printf("Your new balance is $%d\n",balance);
		 }
		
			else if (option==3)
			{
				printf("How much money you would like to withdraw: $");
				scanf("%d",&withdraw);
				
				  if(withdraw < 0)
				{
					printf("Invlaid amount\n");
					return 0;
				}
				if(withdraw != 0 && balance > withdraw)
				{
				balance -= withdraw;
				printf("Your new balance is $%d\n",balance);
			    }
			    else
			    printf("Insufficient balance\n");
			 }	
				
				else
				
					{
						printf("Enter you new pin: ");
						scanf("%d",&key);
						printf("Redirecting\n");
						goto label;
					}
			 
			 choice=0;
			 
			 if(choice!=1&&choice!=2)
			 printf("\nDo you want to do another transaction?\n");
			 printf("1 - Yes\n");
			 printf("2 - No\n");
			 scanf("%d",&choice);
		if(choice == 2)
			printf("Thank you, see you again\n");
	}
	return 0;
}
