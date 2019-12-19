#include<stdio.h>
main()
{
	int bal=7000,minbal=5000,temp,avbal,ch;
	while(1) // for(;;)
	{
		printf("\n 1. deposit");
		printf("\n 2. withdraw");
		printf("\n 3. show balance");
		printf("\n 4. exit");
		
		printf("\n enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: // deposit
			        printf("\n enter amount to deposit:");
			        scanf("%d",&temp);
			        bal=bal+temp;
			        printf("\n rs.%d is deposited successfully",temp);
			        break;
			case 2: // withdraw
			        avbal=bal-minbal;
			        printf("\n enter amount to draw");
			        scanf("%d",&temp);
			        if(temp<=avbal)
			        {
			        	bal=bal-temp;
			        	printf("\n plz collect your cash..");
					}
					else
					    printf("\n insufficient funds..!!");
			        break;
			case 3: // show bal
			        avbal=bal-minbal;
			        printf("\n available balance: %d",avbal);
			        printf("\n ledger balance: %d",bal);
			        break;        
			case 4:exit(0);
			default:printf("\n invalid choice...!");      
			        
		}
	}
}
