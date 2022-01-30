#include<stdio.h>
int main()
{
	int n,i,a[100];
	printf("enter the size of array=");
	scanf("%d",&n);
	printf("enter the array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	int pos,ele;
	printf("enter the position to insert a new element=");
	scanf("%d",&pos);
	printf("enter the element=");
	pos--;
	int j;
	j=n;
	scanf("%d",&ele);
	for(i=n;i>pos;i--)
	{
		j--;
		a[i] = a[j];
	}
	a[pos]=ele;
	printf("list\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	return 0;
}
		
