#include <stdio.h>
int main()
 {
    float weight, height, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
	printf("Your BMI is: %f\n", bmi);
    if (bmi < 18.5) 
    printf("You are underweight.\n");
    else 
    printf("You are obese.\n");
    return 0;
}
