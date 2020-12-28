//PROGRAM AND FUNCTION FOR DELETION OF NODE FROM BEGGINING IN SINGLY LINKED LIST

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head;
struct node *tail;


void createll(int);
void printll(void);
void deletebeg(void);

int main()
{
	head=NULL;
	tail=NULL;
	
	int n;
	
	printf("Enter no of nodes you want to create\n");
	scanf("%d",&n);
	
	createll(n);
	
	printf("Link list created is:\n");
	
	printll();
	
	deletebeg();	
	
	printf("\nlink list after deletion from beggining is:\n");
	printll();
	
	getch();
	return 0;
}

void printll()
{
	struct node *temp2;
	temp2=head;
	int i=1;

  while(temp2!=NULL)
  {
       printf("Data of node %d is %d\n",i,temp2->data);
	   i=i+1;
	   temp2=temp2->next;  	
  }		
}

void createll(int no)
{
	int num,i,num1;
	if(no>=1)
	{
	   	head=(struct node*)malloc(sizeof(struct node));
	   	
	   	if(head!=NULL)
	   	{
	   	   printf("Enter data for node 1\n");
		   scanf("%d",&num); 
		   
		   head->data=num;
		   head->next=NULL;
		   tail=head;
		   
		   
		   for(i=2;i<=no;i++)
		   {
		   	  struct node *temp1;
		   	  temp1=NULL;
		   	  
		  temp1=(struct node*)malloc(sizeof(struct node));
		  
		  if(temp1!=NULL)
		  {
		  	printf("Enter data for node %d\n",i);
		  	scanf("%d",&num1);
		  	
		  	temp1->data=num1;
		  	temp1->next=NULL;
		  	tail->next=temp1;
		  	tail=temp1;	
		  }
		  else
		  {
		  	printf("Memory cannot be allocated\n");
		  }
	   	  
		   }
		    	
		}
		else
		  {
		  	printf("Memory cannot be allocated\n");
		  }
		  	
	}
	else
	{
		printf("Wrong input entered of no of nodes\n");
	}	
}

// FUNCTION FOR DELETION OF NODE FROM BEGGINING IN LINKED LIST

void deletebeg()
{
	if(head==NULL)
	{
		printf("Link list is empty\n");
		printf("underflow condition,nothing to delete\n");
		exit(0);
	}
	else
	{
		struct node *p;
		p=head;
		head=p->next;
		delete(p);
	}	
}


















