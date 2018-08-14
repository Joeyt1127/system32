#include<stdio.h>
int main()
{
	/*
	char name[0];
	
	printf("Please insert your name : ");
	scanf("%s",&name[0]);
	
	scanf("%s",&name[1]);
	scanf("%s",&name[2]);
	scanf("%s",&name[3]);
	scanf("%s",&name[4]);scanf("%s",&name[5]);scanf("%s",&name[6]);
	printf("\nYour name in %s",name[0]);printf("\nYour name in %s",name[1]);printf("\nYour name in %s",name[2]);printf("\nYour name in %s",name[3]);printf("\nYour name in %s",name[4]);
	printf("\nYour name in %s",name[5]);printf("\nYour name in %s",name[6]);
	
	*/
	
	char name[30];
	printf("Please insert your name : ");
	for(int i=0;i<4;i++)
	{	puts("name");
		//gets(name[i]);
		scanf("%s",&name[i]);
	}
	for(int i=0;i<4;i++)
	{
		printf("\n");
		//puts(name[i]);
		printf("%s",name[i]);
		
	}
	getchar();getchar();return(0);


//	scanf("%s""%s""%s""%s""%s",&name[0],&name[1],&name[2],&name[3],&name[4]);
	//printf("your name is: %s%s%s%s%s",name[0],name[1],name[2],name[3],name[4]);
	printf("your name is : %s",name);
}
