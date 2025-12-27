#include <stdio.h>
int main()
{
	int i,n,num;
	int largest , smallest;
	printf("enter the number of integers to compare: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("please enter a positive number of integers.\n");
		return 1 ;
	}
	printf("enter integer 1: ");
	scanf("%d",&num);
	largest =num;
	smallest=num;
	for (i=2;i<=n;i++)
	{
		printf("enter integer %d: ",i);
		scanf("%d",&num);
	}
	if(num>largest){
		largest = num;
	}
	if(num<smallest){
		smallest =num ;
	}
	return 0;
}
