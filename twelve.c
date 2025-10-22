#include<stdio.h>
int main(void)
{
    int limit;
    printf("Введите кол-во элементов: ");
    while (scanf("%d", &limit) == 1)
    {
        if (limit <= 0)
        {
            break;
        }
        double sum1 = 0.0;
        double sum2 = 0.0;
        for (int i = 1; i <= limit; i++)
        {
            sum1 += 1.0 / i;
            if (i % 2 == 1)
            {
                sum2 += 1.0 / i;
            }
            else
            {
                sum2 -= 1.0 / i;
            }
        }
        printf("Для %d элементов:\n");
        printf("%.6f\n", sum1);
        printf("%.6f\n", sum2);
        printf("Введите следующее кол-во элементов: ");
    }
    printf("Работа завершена");
    return 0;
}
