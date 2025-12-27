#include <stdio.h>
int main()
{
int a,d,n,term;
printf("Enter the first term,a:");
scanf("%d",&a);
printf("Enter the difference,d:");
scanf("%d",&d);
printf("Enter the number of terms:");
scanf("%d,",&n);
printf("The arithmetic progression is:\n");
for (int i=0;i<n;i++)
{
term=a+i*d;
printf("%d,",term);
}
printf("\n");
return 0;
}

