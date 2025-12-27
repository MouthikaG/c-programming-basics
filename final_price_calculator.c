#include <stdio.h>
int main()
{
float original_price, discount, tax, final_price;
printf("Enter the original price:");
scanf("%f", &original_price);
printf("Enter the discount percentage:");
scanf("%f", &discount);
printf("Enter the sales tax:");
scanf("%f", &tax);
final_price = (original_price - (original_price * discount/100)) * (1 +tax/100);
printf("The final price is: %f\n", final_price);
return 0;
}

