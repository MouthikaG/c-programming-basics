#include <stdio.h>
int main() 
{
int n,search,num,found = 0;
printf("Enter the number of elements:");
scanf("%d", &n);
printf("Enter the element to search:");
scanf("%d", &search);
for(int i=1;i<=n;i++) 
{
printf("Enter element %d:",i);
scanf("%d", &num);
if(num==search) 
{
found=1;
printf("Element %d found at position %d\n",search,i);
break;
}
}
if(!found) 
{
printf("Element %d not found\n", search);
}
return 0;
}

