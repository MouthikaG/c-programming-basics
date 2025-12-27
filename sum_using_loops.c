
#include <stdio.h>

int sumUsingWhile(int n)
 {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int sumUsingDoWhile(int n) {
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    return sum;
}

int sumUsingFor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    int sumWhile = sumUsingWhile(n);
    int sumDoWhile = sumUsingDoWhile(n);
    int sumFor = sumUsingFor(n);

    printf("Sum using while loop: %d\n", sumWhile);
    printf("Sum using do-while loop: %d\n", sumDoWhile);
    printf("Sum using for loop: %d\n", sumFor);

    return 0;
}
