#include<stdio.h>
int main()
{
	int a [10],sum=0,i,n;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d value:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("the sum of given number is:%d\n",sum);
}
	
