#include<stdio.h>
#include<stdlib.h>
#define size 5

void enqueue(int q[],int *r)
{
 int item;
 if(*r==size-1)
  printf("Queue fill\n");
 else 
 {
  printf("\nEnter the value to be entered\n");
  scanf("%d",&item);
  (*r)++;
  q[*r]=item;
 }
}

void dequeue(int q[],int *r,int *f)
{
 if(*f>*r)
  printf("Queue is empty\n");
 else
 {
  printf("Item deleted is %d\n",q[*f]);
  (*f)++;
 }
}

void display(int q[],int *r,int *f)
{
 int i;
 if(*f>*r)
 printf("Queue is empty:\n");
 for(i=*f;i<=*r;i++)
 {
   printf("\n%d\n",q[i]);
 }
}

void main()
{
int q[20];
int r=-1;
int f=-0;
int a;
while(1)
{
 printf("\n1.Enter");
 printf("\n2.Delete");
 printf("\n3.Display");
 printf("\n4.Exit\n");
 scanf("%d",&a);
 switch(a)
{
 case 1: enqueue(q,&r);
	 break;
 case 2: dequeue(q,&r,&f);
	 break;
 case 3: display(q,&r,&f);
 	 break;
 case 4: exit(0);
 	 break;
 default: printf("Invalid choice");
}
}
}
