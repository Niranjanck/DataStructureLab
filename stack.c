#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack[n];
int top =-1;
void insertion();
void display();
void deletion();
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
	if(top==n-1)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		printf("enter the element=");
		scanf("%d",&ele);
		stack[top]=ele;
		
	}
}
void deletion()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("deleted element is=%d",stack[top]);
		top--;
		
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("list\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}
