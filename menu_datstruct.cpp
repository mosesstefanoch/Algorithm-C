#include <stdio.h>
#include <string.h>
int main ()
{
	int pilihan;
	int ck001=13,ck009=5,ck017=24,ck023=7;
	int jumlah_quantity;
	char cake_code[1005];

	do
	{	
		printf("BLUE CAKE SHOP CASHIER\n");
		printf("======================\n");
		printf("\nNo. | Cake Code | Cake Name            | Available   | Price\n");
		printf("---------------------------------------------------------------\n");
		printf("01. | CK001     | Blueberry Cake       |       %4d  | Rp. 25000,-\n",ck001);
		printf("02. | CK009     | Chocochip Cake       |       %4d  | Rp. 20000,-\n",ck009);
		printf("03. | CK017     | Mayonaise Cake       |       %4d  | Rp. 30000,-\n",ck017);
		printf("04. | CK023     | Strawberry ShortCake |       %4d  | Rp. 17500,-\n",ck023);
		printf("---------------------------------------------------------------\n");
		printf("\nMenu :\n");
		printf("1. Sell\n");
		printf("2. Add Stock\n");
		printf("3. Exit\n");
		printf("Input choice : ");
		scanf("%d", &pilihan);

		switch(pilihan)
		{
			case 1:
			do
			{
				printf("Input Cake Code: ");
				scanf("%s", cake_code); getchar();
				if(strcmp(cake_code,"CK001")!=0 && strcmp(cake_code,"CK009")!= 0 && strcmp(cake_code,"CK017")!= 0 && strcmp(cake_code,"CK023")!= 0 )
				{
					printf("Code doesn't exist ---\n");
					getchar();
				}
				
			}
			while(strcmp(cake_code,"CK001") != 0 && strcmp(cake_code,"CK009")!= 0 && strcmp(cake_code,"CK017")!= 0 && strcmp(cake_code,"CK023")!= 0 );
			if(strcmp(cake_code,"CK001")==0)
			{
				do
				{
					printf("[0...%d] : ", ck001);
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>ck001)
					{
						printf("...The quantity of cake is not enough...\n");
						getchar();
					}
				}
				while(jumlah_quantity>ck001);
				printf("Total Price is: Rp. 25000,- x %d = Rp %d,-”\n", jumlah_quantity, (jumlah_quantity*25000));
				ck001 -= jumlah_quantity;
				printf("--- Thank You ---\n");
				getchar();
			}
			else if(strcmp(cake_code,"CK009")==0)
			{
				do
				{
					printf("[0...%d] : ", ck009);
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>ck009)
					{
						printf("...The quantity of cake is not enough...\n");
						getchar();
					}
				}
				while(jumlah_quantity>ck009);
				printf("Total Price is: Rp. 20000,- x %d = Rp %d,-”\n", jumlah_quantity, (jumlah_quantity*20000));
				ck009 -= jumlah_quantity;
				printf("--- Thank You ---\n");
				getchar();
			}
			else if(strcmp(cake_code,"CK017")==0)
			{
				do
				{
					printf("[0...%d] : ", ck017);
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>ck017)
					{
						printf("...The quantity of cake is not enough...\n");
						getchar();
					}
				}
				while(jumlah_quantity>ck017);
				printf("Total Price is: Rp. 30000,- x %d = Rp %d,-”\n", jumlah_quantity, (jumlah_quantity*30000));
				ck017 -= jumlah_quantity;
				printf("--- Thank You ---\n");
				getchar();
			}
			else if(strcmp(cake_code,"CK023")==0)
			{
				do
				{
					printf("[0...%d] : ", ck023);
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>ck023)
					{
						printf("...The quantity of cake is not enough...\n");
						getchar();
					}
				}
				while(jumlah_quantity>ck023);
				printf("Total Price is: Rp. 17500,- x %d = Rp %d,-”\n", jumlah_quantity, (jumlah_quantity*17500));
				ck023 -= jumlah_quantity;
				printf("--- Thank You ---\n");

			}
			break;

			case 2:
			do
			{
				printf("Input Cake Code: ");
				scanf("%s", cake_code); getchar();
				if(strcmp(cake_code,"CK001")!=0 && strcmp(cake_code,"CK009")!= 0 && strcmp(cake_code,"CK017")!= 0 && strcmp(cake_code,"CK023")!= 0 )
				{
					printf("Code doesn't exist ---\n");
					getchar();
				}
				
			}
			while(strcmp(cake_code,"CK001") != 0 && strcmp(cake_code,"CK009")!= 0 && strcmp(cake_code,"CK017")!= 0 && strcmp(cake_code,"CK023")!= 0 );
			if(strcmp(cake_code,"CK001")==0)
			{
				do
				{
					printf("[1...10] : ");
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>10)
					{
						printf("Please input quantity 1-10\n");
						getchar();
					}
				}
				while(jumlah_quantity>10);
				printf("--- Adding Stock Success ---\n");
				ck001 += jumlah_quantity;
				getchar();
			}
			else if(strcmp(cake_code,"CK009")==0)
			{
				do
				{
					printf("[1...10] : ");
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>10)
					{
						printf("Please input quantity 1-10\n");
						getchar();
					}
				}
				while(jumlah_quantity>10);
				printf("--- Adding Stock Success ---\n");
				ck009 += jumlah_quantity;
				getchar();
			}
			else if(strcmp(cake_code,"CK017")==0)
			{
				do
				{
					printf("[1...10] : ");
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>10)
					{
						printf("Please input quantity 1-10\n");
						getchar();
					}
				}
				while(jumlah_quantity>10);
				printf("--- Adding Stock Success ---\n");
				ck017 += jumlah_quantity;
				getchar();
			}
			else if(strcmp(cake_code,"CK023")==0)
			{
				do
				{
					printf("[1...10] : ");
					scanf("%d",&jumlah_quantity);
					if(jumlah_quantity>10)
					{
						printf("Please input quantity 1-10\n");
						getchar();
					}	
				}
				while(jumlah_quantity>10);
				printf("--- Adding Stock Success ---\n");
				ck023 += jumlah_quantity;
				getchar();
			}
			break;

		}	


	}while(pilihan != 3);


	return 0;
}