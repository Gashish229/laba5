#include <stdio.h>
double calculate(double a, double b)
{
    return (a - b) / (a * b);
}
int main() {
    double num1, num2;
    while (1) {
        printf("Введите два числа: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) 
        {
            break;
        }
        double result = calculate(num1, num2);
        printf("%.4f\n", result);
    }
    return 0;
}
