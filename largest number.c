#include<stdio.h>
int main() 
{
int n,i,num,largest,smallest;
printf("Enter no.of.integers to compare:");
scanf("%d",&n);
if(n<=0) 
{
printf("enter a positive number\n");
return 1; 
}
printf("Enter an  integer 1:");
scanf("%d",&num);
largest=num;
smallest=num;
for (i=2;i<=n;i++)
{
printf("Enter integer %d:", i);
scanf("%d",&num);
if (num>largest) 
{
largest=num; 
}
if (num<smallest)
{
smallest=num;
} 
}
printf("The largest integer is: %d\n", largest); 
printf("The smallest integer is: %d\n",smallest);
return 0;
}

