#include <stdio.h>
#include<stdio.h>
int main() 
{
float price1, price2, price3;
int quantity1, quantity2, quantity3;
float totalCost1, totalCost2, totalCost3, totalBill;
    
printf("Enter the price of item 1: $");
scanf("%f", &price1);
printf("Enter the quantity of item 1: ");
scanf("%d", &quantity1);
    
printf("Enter the price of item 2: $");
scanf("%f", &price2);
printf("Enter the quantity of item 2: ");
scanf("%d", &quantity2);
    
printf("Enter the price of item 3: $");
scanf("%f", &price3);
printf("Enter the quantity of item 3: ");
scanf("%d", &quantity3);
    
totalCost1 = price1 * quantity1;
totalCost2 = price2 * quantity2;
totalCost3 = price3 * quantity3;
    
totalBill = totalCost1 + totalCost2 + totalCost3;
  
printf("\nTotal Bill: $%.2f\n", totalBill);
    
return 0;
}
