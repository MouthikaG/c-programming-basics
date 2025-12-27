#include <stdio.h>
int main()
{
int i=1,a, sum=0;
printf("Enter a number:");
scanf("%d", &a);
while (i<=a) 
{
sum +=i;
i++;
}
printf("sum=%d\n",sum);
return 0;
}

