//PROGRAM AND FUNCTION FOR INSERTION OF NODE AT ANY POSITION IN SINGLY LINKED LIST

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

void insertany(int);
void createll(int);
void printll(void);

int main()
{
	head=NULL;
	tail=NULL;
	
	int pos,n;
	
	printf("Enter no of nodes you want to create\n");
	scanf("%d",&n);
	
	createll(n);
	
	printf("Link list created is:\n");
	
	printll();
	
	printf("\nEnter position where you want to insert new node\n");
    printf("Where position starts from 0\n");
	scanf("%d",&pos);
	
	insertany(pos);	
	
	printf("link list after insertion is:\n");
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

// FUNCTION FOR INSERTION OF NODE AT ANY POSITION IN LINKED LIST
void insertany(int position)
{
	struct node *temp;
	int num,i;
	temp= (struct node*)malloc(sizeof(struct node));
	
	printf("Enter new data you want to insert for new node\n");
	scanf("%d",&num);
	
	temp->data=num;
	temp->next=NULL;
	
	if(head==NULL)
	{
		printf("Linked list is empty\n");
		head=temp;
	}
	else
	{
		struct node *p;
		p=head;
		
		for(i=0;i<position-1;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;	
	}	
}
