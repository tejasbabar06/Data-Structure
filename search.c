#include<stdio.h>
int search(int a[],int data,int last);
int main ()
{
	int a[10]={2,3,4,5,6};
	int last=5;
	int data;
	int pos;
	printf("Entre the no to search :");
	scanf("%d",&data);
	pos =search(a,data,last);
	if (pos != -1)
	 {
        printf("The number %d is present at index %d.\n", data, pos+1);
     }  else 
		{
       		 printf("The number %d is not found.\n", data);
    	}
    	return 0;
}
int search(int a[],int data, int last)
{
	int i=0;
	for(i=0;i<last;i++)
	{
		if(data==a[i])
		{
			return i;
		}
	}
	return -1;
}
