#include <stdio.h>
int main() 
{
int a,orinum,revnum = 0,remainder;
printf("Enter an integer:");
scanf("%d",&a);
orinum=a;
while (a!=0) 
{
remainder=a%10;
revnum=revnum*10+remainder;
a/=10;
}
if (orinum==revnum)
{
printf("%d is a palindrome\n",orinum);
} else {
printf("%d is not a palindrome\n",orinum);
}
return 0;
}

