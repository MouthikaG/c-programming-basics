#include <stdio.h>
int main() {
int z,orinum,remainder,result=0;
printf("Enter a number: ");
scanf("%d",&z);
orinum=z;
while(orinum!=0)
{
remainder=orinum%10;
result+=remainder*remainder*remainder;
orinum/=10;
}
if(result==z) 
{
printf("%d is an Armstrong number\n",z);
} else {
printf("%d is not an Armstrong number\n",z);
}
return 0;
}

