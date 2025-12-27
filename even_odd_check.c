#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The number %d is %s.\n",
           number,
           (number % 2 == 0) ? "Even" : "Odd");

    return 0;
}

