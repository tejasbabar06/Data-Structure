#include <stdio.h>
int main ()
{
    int sum=0,avg,std,n,i;
printf("Entre the value of n");
scanf("%d",&n);
    int a[n];
printf("Entre numbers :\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}    
for(i=0;i<n;i++)
{
    sum=a[i]+sum;
} 
printf("Sum is %d",sum);
avg=sum/n;
printf("Average is :%d",avg);
for(i=0;i<n;i++)
{
    a[i]=a[i]-avg;
    a[i]=a[i]*a[i];
} 


    }
