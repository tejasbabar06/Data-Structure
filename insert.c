#include<stdio.h>
int insert(int data,int pos,int a[],int last,int size);
int shiftdown(int a[],int spos,int last);
int main()
{
	int a[10]={2,3,4,5,6};
	int size=4;
	int last=5;
	int status,i;
	int data,pos;
	printf("Array elemnts are:\n");
	for(i=0;i<last;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("Entre data and position :\n");
	scanf("%d%d",&data,&pos);
	pos=pos-1;
	status=insert(data,pos,a,last,size);
	for(i=0;i<last+1;i++)
	{
		printf(" %d",a[i]);
	}
}
int insert(int data,int pos,int a[],int last,int size)
{
	if(last==-1)
	{
		if(pos==0)
		{
			a[pos]=data;
			last++;
		}
		else
		{
			printf("Error");
		}
	}
	else
	{
		if(last+1==pos)
		{
			a[pos]=data;
			last++;
		}
		else
		{
			if(pos<=last)
			{
				shiftdown(a,pos,last);
				a[pos]=data;
				last++;
			}
			else
			{
				printf("Error");
			}
		}
	}
}
int shiftdown(int a[],int spos,int last)
{
	int cur_pos;
	cur_pos=last;
	while(cur_pos>=spos)
	{
		a[cur_pos+1]=a[cur_pos];
		cur_pos--;
	}	
}
