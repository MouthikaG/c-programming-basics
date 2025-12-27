#include <stdio.h>
#include <math.h>
int main()
{
    int i,firstterm,ratio, numterms,term;
    printf("Enter the first term of the GP: ");
    scanf("%d", &firstterm);
    printf("Enter the ratio: ");
    scanf("%d", &ratio);
    printf("Enter the number of terms: ");
    scanf("%d", &numterms);
    printf("Geometric Progression: ");
    for (i = 0; i < numterms; i++) {
        term = firstterm * pow(ratio, i);
        printf("%d ",term);
    }
    printf("\n");
    return 0;
}	
