#include<stdio.h>
int main ()
{
	int n,i,temp,j;
	printf("Entre the size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("Entre the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
