#include <stdio.h>
int main() 
{
    int a,b,c,max;
    printf("Enter three integers:\n");
    scanf("%d%d%d", &a,&b,&c);
    switch (max) 
    {
        case 1:
            if (a>=b && a>=c) 
            {
                max=a;
            }
            break;
        case 2:
            if (b>=a && b>=c)
            {
                max=b;
            }
            break;
        case 3:
            if (c>=a && c>=b)
            {
                max =c;
            }
            break;
    }
    if (b>=a && b>=c)
    {
        max =b;
    }
    if (c>=a && c>=b) 
    {
        max =c;
    }
    printf("The maximum number is: %d\n", max);
    return 0;
}

