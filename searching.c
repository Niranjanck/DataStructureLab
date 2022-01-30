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
	printf("enter the element to search=");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			pos=i;
		}
	}
	printf("element found at position =%d",pos+1);
	return 0;
}
