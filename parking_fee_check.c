#include <stdio.h>
int main()
{
int a;
printf("enter your 4 digit car register number:");
scanf("%d",&a);
if(a%3==0 || a%7==0)
printf("free of cost!!,you can go");
else if(a%2==0 || a%8==0)
printf("pay half of the fee");
else
printf("you should pay full fee");
return 0;
}
