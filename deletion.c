#include<stdio.h>
int main()
{
	int i,n,a[100],pos,ele;
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
	printf("enter the element to delete=");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			pos=i;
		}
	}
	int j;
	j=pos;
	for(i=pos;i<n;i++)
	{
		j++;
		a[i]=a[j];
	}
	printf("list\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
		
