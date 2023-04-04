#include<stdio.h>

int main(){
    int num1, num2, summation, subtraction, multiplication;
    float division;
    scanf("%d%d", &num1, &num2);
    summation = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = (float) num1 / num2;
    printf("summation = %d\n", summation);
    printf("subtraction = %d\n", subtraction);
    printf("multiplication = %d\n", multiplication);
    printf("division = %.2f\n", division);
    printf("\n\n");

    return 0;
}