#include<stdio.h>
int main()
{
	int i,n,a[100],b[100],m;
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
	printf("enter the size of array=");
	scanf("%d",&m);
	printf("enter the array elements \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int s=0,j=0,t,k;
	s=m+n;
	
	
	for(i=n;i<s;i++)
	{
		a[i]=b[j];
		j++;
	}
	for(i=0;i<s;i++)
	{
		for(k=i+1;k<s;k++)
		{
			if(a[i]>a[k])
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
		}
	}
	printf("list\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
	
