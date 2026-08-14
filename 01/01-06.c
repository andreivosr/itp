#include <stdio.h>

int main() {
    int number;
    double hours, salary;
    scanf("%d %lf %lf", &number, &hours, &salary);
    double total_salary = hours * salary;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", total_salary); 
    return 0;
}