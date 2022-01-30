#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int rear=-1;
int front=-1;
void insertion();
void deletion();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\nSelect your choice \n 1.Insertion \n 2.deletion\n 3.display \n 4.exit \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insertion();
			break;
		case 2:deletion();
			break;
		case 3:display();
			break;
		case 4:exit(0);
		default :printf("select correct option");
	}
	}
	return 0;
}
void insertion()
{
	int ele;
	if(front==((rear+1)%n))
	{
		printf("circular queue is underflow");
	}
	else if(front== -1 && -1==rear)
	{
		front=rear=0;
		printf("enter the element=");
		scanf("%d",&ele);
		queue[rear]=ele;
	}
	else
	{
		rear=((rear+1)%n);
		printf("enter the element=");
		scanf("%d",&ele);
		queue[rear]=ele;
	}
}
void deletion()
{
	if (front==-1 && rear ==-1)
	{
		printf("queue is empty");
	}
	else if (rear == front)
	{
		printf("deleted element is = %d",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("deleted element is =%d",queue[front]);
		front=((front+1)%n);
		
	}
}
void display()
{
	int i;
	if(rear==-1 && front ==-1)
	{
		printf("queue is empty");
		
	}
	else
	{
		printf("List\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
		
		
