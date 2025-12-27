#include<stdio.h>
int main()
{
    int i,j,rows,num=1;
    printf("enter number of rows:");
    scanf("%d",&rows);
    
    printf("right triangle using stars:\n");
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("right triangle using numbers:\n");
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("pyramid:\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
printf("inverted triangle:\n");
for (i = rows; i >= 1; i--) 
{
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
}

printf("number pyramid:\n");
for (i = 1; i <= rows; i++) 
{
for (j = i; j < rows; j++) 
{
printf(" ");
}
for (j = 1; j <= i; j++) 
{
printf("%d ", num);
num++;
}
printf("\n");
}
printf("right triangle number pyramid:\n");
for (i = 1; i <= rows; i++)
{
for (j = 1; j <= i; j++) 
{
printf("%d ", num);
num++;
}
printf("\n");
}
    return 0;
}

