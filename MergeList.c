#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
void main()
{
	char list1[10][256];
	char list2[10][256];
	int l1,l2,i;
	int c,c1,x;
	clrscr();
	printf("enter length of list1 and list2\n");
	scanf("%d%d",&l1,&l2);
	if(l1!=l2)
	{	printf("lists cannot be merged\n");
		exit(0);
	}
	printf("enter elements of list1\n");
	for(i=0;i<l1;i++)
	{
		scanf("%s",list1[i]);
	}
	printf("LIST 1: ");
	for(i=0;i<l1;i++)
	printf("%s  ",list1[i]);
	printf("\n");
	printf("enter elements of list2:\n");
	for(i=0;i<l2;i++)
	{
		 scanf("%s",list2[i]);
	}
	printf("LIST 2: ");
	for(i=0;i<l1;i++)
	printf("%s  ",list2[i]);
	printf("\n");
	x=l1-1;
	for(i=0;i<l1;i++)
	{
		c=strcmp(list1[i],"none");
		if(c==0)
		{
			strcpy(list1[i],"");
			strcpy(list1[i],list2[x]);
			strcpy(list2[x],"");
		}
		c1=strcmp(list2[x],"none");
		if(c1==0)
		{
			strcat(list1[i],"");
			strcpy(list2[x],"");
		}
		else
			strcat(list1[i],list2[x]);
			x--;
		}
		printf("MERGED LIST: ");
		for(i=0;i<l1;i++)
		printf("%s  ",list1[i]);
		getch();
}
