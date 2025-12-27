#include <stdio.h>
int main() {
float accountBalance, withdrawalAmount;
printf("Enter the current account balance: $");
scanf("%f", &accountBalance);
printf("Enter the withdrawal amount: $");
scanf("%f", &withdrawalAmount);
if (withdrawalAmount <= accountBalance) 
{
accountBalance -= withdrawalAmount;
printf("Withdrawal successful.\n");
printf("New account balance: $%.2f\n", accountBalance);
} 
else
{
printf("Insufficient funds.\n");
}    
return 0;
}
