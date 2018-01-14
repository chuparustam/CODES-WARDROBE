#include <stdio.h>
#include <stdlib.h>
struct List
{
	int data;
	struct List* next;
}
void display(struct List* head)
{
	struct List* ptr=head;
	while(ptr!=NULL)
	{
       printf("%d ",ptr->data);
       ptr=ptr->next;
	}
	printf("\n");
}
int count(struct List* head)
{
	int ctr=0;
	struct List* ptr=head;
	while(ptr!=NULL)
	{
	  ptr=ptr->next;
	  ctr++;
	} 
	return ctr;
}
struct List* insertList()
{
	struct List* last,head;
	int choice=1;
	printf("Enter -1 to exit insertion");
	while(choice!=-1)
	{
       int val;
       scanf("%d",&val);
       struct List* ptr=(struct List*)malloc(sizeof(struct List));
       ptr->next=NULL;
       ptr->data=val;
       if(last==NULL)
       {
         last=ptr;
         head=ptr;
       }
       else
       {
         last->next=ptr;
         last=ptr;
       }  
       scanf("%d",&choice);
	}
	last->next=NULL;
	return head; 
}
int main()
{
	display(insertList());
	return 0;
}