#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee employees[MAX_EMPLOYEES];
    int numEmployees;
    float totalSalary = 0.0;
    float highestSalary = 0.0;
    float lowestSalary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
        
        totalSalary += employees[i].salary;  
        
        if (i == 0) {
            highestSalary = employees[i].salary;
            lowestSalary = employees[i].salary;
        } else {
            if (employees[i].salary > highestSalary) {
                highestSalary = employees[i].salary;
            }
            if (employees[i].salary < lowestSalary) {
                lowestSalary = employees[i].salary;
				  }
        }
    }

    float averageSalary = totalSalary / numEmployees;

    printf("\nEmployee Salary Summary:\n");
    printf("Total Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n", lowestSalary);

    return 0;
}

