#include <stdio.h>
int main() 
{
int choice;
float a,b,result;
do 
{
printf("\nMenu:\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
printf("Enter your choice (1-5):");
scanf("%d",&choice);
printf("enter two numbers a and b:");
scanf("%f%f",&a,&b);
switch (choice)
{
case 1:
result=a+b;
printf("Result:%f\n",result);
break;
case 2:
result=a-b;
printf("Result: %f\n",result);
break;
case 3:
result =a*b;
printf("Result: %f\n",result);
break;
case 4:
if(b!=0) 
{
result=a/b;
printf("Result: %f\n",result);
}
else 
{
printf("Error!");
}
break;
case 5:
printf("exiting the program");
break;
default:
printf("Invalid choice");
}
}
while (choice!=5);
return 0;
}

