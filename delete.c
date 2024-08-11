#include<stdio.h>
int delet(int a[],int pos,int last);
int shiftup(int last,int spos,int a[]);
int main ()
{
	int a[10]={1,2,3,4,5,6};
	int pos;
	int last=5;
	int status,i;
	printf("Array before delete is :");
	for(i=0;i<=last;i++)
	{
		printf("%d",a[i]);
	}
	printf("Entre the position");
	scanf("%d",&pos);
	pos=pos-1;
	status= delet(a,pos,last);
	printf("Array after delet is :");
	for(i=0;i<last;i++)
	{
		printf("%d",a[i]);
	}
}
int delet(int a[],int pos,int last)
{
	if(last==-1)
	{
		return 0;
	}
	else
	{
		if(pos==last)
		{
			last--;
			return 1;
		}
		else
		{
			if(pos<last)
			{
				a[pos]--;
				shiftup(last,pos,a);
				last--;
				return 1;
			}
		}
	}
}
int shiftup(int last,int spos,int a[])
{
	int cur_pos=last;
	while(cur_pos>=spos)
	{
		a[spos]=a[spos+1];
		spos++;
	}
}
