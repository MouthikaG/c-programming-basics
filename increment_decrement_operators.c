#include<stdio.h>
void main ()
{
	int i,j,k;
	i=3;
	j=4;
	k=i+++ --j;
	printf("i=%d,j=%d",i,j,k);
	return 0;
}
