#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node* node;

node getnode()
{
  node temp;
  temp = (node)malloc(sizeof(struct node));
  return temp;
}

node insert(node first , int item)
{
  node temp,curr;
  curr = first;
  temp = getnode();
  temp->data = item;
  temp->next = NULL;
  if(first == NULL)
  {
    return temp;
  }
  else
  {
    while(curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->next = temp;
    return first;
  }
}

node concatenate(node first1, node first2)
{
  node curr;
  curr = first1;
  while(curr->next != NULL)
  {
    curr = curr->next;
  }
  curr->next = first2;
  return first1;
}

node sort(node first){
	int swapped = -1;
	node curr, last, temp;
	if(first == NULL){
		printf("Linked list is empty");
		return first;
	}
	else{
		
		last = NULL;
		while(swapped != 0){
			swapped = 0;
			curr = first;
			while(curr->next != last){
				if(curr->data > (curr->next)->data){
					temp->data = curr->data; 
					curr->data = (curr->next)->data;
					(curr->next)->data = temp->data;
					}
				swapped = 1;
				curr = curr->next;
				}
			last = curr;
			}
		
		}
		return first;
	}

 node reverse(node first) 
    { 
        
        node current = first; 
        node prev = NULL, next = NULL; 
  
        while (current != NULL) { 
            
            next = current->next; 
  
            
            current->next = prev; 
  
            
            prev = current; 
            current = next; 
        } 
        first = prev; 
        return first;
    } 
void main()
{
  node first1 = NULL , first2 = NULL , curr = NULL;
  int ch = 0 , item = 0;
  while(1)
  {
    printf("\nEnter your choice :\n1.Insert elements in list1\n2.Insert elements in list2\n3.Concatenate two lists\n4.Sort the list\n5.Reverse a string\n6.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : printf("\nEnter element to be inserted in list1 : ");
               scanf("%d",&item);
               first1 = insert(first1 , item);
               break;
      case 2 : printf("\nEnter element to be inserted in list2 : ");
               scanf("%d",&item);
               first2 = insert(first2 , item);
               break;
      case 3 : first1 = concatenate(first1 , first2);
               printf("\nThe elements in list after concatenation:\n");
               curr = first1;
               while(curr != NULL)
               {
                 printf("%d\t",curr->data);
                 curr = curr->next;
               }
               break;
      case 4 : first1 = sort(first1);
               curr = first1;
               printf("\nThe elements after sorting is\n");
               while(curr != NULL)
               {
                 printf("%d\t",curr->data);
                 curr = curr->next;
               }
               break;
      case 5 : first1 = reverse(first1);
               curr = first1;
               printf("\nThe elements after reversing is\n");
               while(curr != NULL)
               {
                 printf("%d\t",curr->data);
                 curr = curr->next;
               }
               break;
      
      case 6 : exit(0);
      default : printf("\nInvalid choice");
                break;
    }
  }
}
