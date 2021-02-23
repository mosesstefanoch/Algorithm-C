#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
	char nama[30];
	int age;
}arr[30];
int count=0;

void menu()
{
	system("cls");
	printf("Hidden Data\n");
	printf("========================\n");
	printf("1.Add New Data			\n");
	printf("2.Update Data		\n");
	printf("3.View Data	\n");
	printf("4.Delete Data			\n");
	printf("5.Exit			\n");
	printf("						\n");
	printf("Input your choice[1..5]:");
}

void add(){
	char key[30];
	int i;
	do{
		printf("Input Name [1...10]: ");
		gets(key);fflush(stdin);
		
	}while(strlen(key)<1 || strlen(key)>10);
	strcpy(arr[count].nama, key);
	arr[count].age =i;
	count++;
	printf("Success to add new data");
	getchar(); 
}
int cari_index(char key[30])
{
	int i;
	for(i=0;i<count;i++)
	{
		if(strcmp(key,arr[i].nama)==0)
			return i;
	}
	return -1;
}

void update(){
	char key[30];
	int index;
	int i;
	do{
	printf("input name [1..10 kar]:");
	gets(key);
	}while(strlen(key)<1||strlen(key)>10);

	index=cari_index(key);
	
	if(index==-1)//index -1 menandakan data tidak ditemukan
	{
		printf("\n\nname of %s not found\n\n",key);
	}
	else 
	{
		arr[index].nama;
		printf("\n\n%s Successfully delete\n\n",key);
	}
	count--;

	getchar();
}
void view()
{
	int i;
	printf("  %-15s | %-15s \n","Name","Age");
	printf("=======================================================\n");
	for(i =0;i<count;i++)
	{
		printf("  %-15s | %-15d \n",arr[i].nama,arr[i].age);
	}
	printf("press Enter to continue");
	getchar();
}
void del()
{
	char key[30];
	int index;
	int i;
	do{
		printf("input name [1..10 kar]:");
		gets(key);
	}while(strlen(key)<1||strlen(key)>10);

	index=cari_index(key);
	
	if(index==-1)//index -1 menandakan data tidak ditemukan
	{
		printf("\n\nname of %s not found\n\n",key);
	}
	else 
	{
		for(i=index;i<count-1;i++)
		{
			arr[i]=arr[i+1];
		}
		printf("\n\n%s Successfully delete\n\n",key);
	}
	count--;

	getchar();

}
int main()
{
	int jawab;

	do{
		menu();
		menu();
		menu();
		scanf("%d",&jawab);fflush(stdin);
		switch(jawab)
		{
		case 1 :add(); break; 
		case 2 :update(); break;
		case 3 :view(); break;
		case 4 :del(); break;
		case 5 :; break;
		}
	}while(jawab!=6);

	return 0;
}
