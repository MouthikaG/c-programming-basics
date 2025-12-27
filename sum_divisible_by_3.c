#include<stdio.h>
int main()
{
int i,sum=0;
for(int i=1000;i<=2000;i++) 
{
if (i%3==0)
{
sum+=i;
}
}
printf("The numbers btw 1000 and 2000 divisible by 3 is:%d\n",sum);
return 0;
}

