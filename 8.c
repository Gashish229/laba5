#include <stdio.h>
int main() 
{
    double num1, num2;
    while (1) {
        printf("Введите два числа: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) 
        {
            break;
        }
        double result = (num1 - num2) / (num1 * num2);
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.4f\n", num1, num2, num1, num2, result);
    }
    return 0;
}
