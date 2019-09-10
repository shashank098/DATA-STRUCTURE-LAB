//Given a stack of integers, write a program that updates the input stack such that all occurrences of the smallest values are at the bottom of the stack, while the order of the other elements remains the same.


#include<stdio.h>
#include<conio.h>
#define size 100
void display(int *,int[]);
void push(int*,int[]);
void pop(int*,int[]);
void main()
{
  int n, top=-1,stack[size];
  do
   {
      printf("1.insert \n 2. delete\n 3.display \n 4.exit\n");
  scanf("%d",&n);
  switch(n)
  {case 1:push(&top,stack);
          break;
   case 2 :pop(&top,stack);
         break;
    case 3: display(&top,stack);
         break;
    case 4 :break;
    default: printf ("enter correct option");
  }
   }while(n!=4);
 getch();
}
void display(int *n,int stack[size])
{int i,j,ele1,ele2;
    for(i=*n-1;i>0;i--)
 {
    for(j=*n-1;j>(*n-1-i);j--)
   {
    ele1=stack[j];
    ele2=stack[j-1];
    if(ele1<ele2)
    {stack[j]=ele2;
    stack[j-1]=ele1; 
    }

   }

 }
 if (*n==-1)
 printf("stack is empty");
 else
{ printf("the stack after arranging is:");
 for(i=*n-1;i>=0;i--)
 {printf("%d",stack[i]);
 printf("\n");
 }
}
}
void push(int *top,int stack[size])
{
    if (*top==size-1)
    printf ("stack is full");
    
    else if(*top==-1)
    {
        *top=0;
        printf("enter the element to be inserted:");
        scanf ("%d",&stack[*top]);
        (*top)++;
    }
    else
    {
        printf("enter the element to be inserted:");
        scanf ("%d",&stack[*top]);
        (*top)++;
    }
}
