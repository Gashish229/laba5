#include<stdio.h>
int main(void)
{
    int verh, niz;
    printf("Введите нижний и верхний целочисленные пределы: ");
    while (scanf("%d %d", &niz, &verh) == 2) 
    {
        if (niz >= verh)
        {
            printf("Работа завершена");
            break;
        }
        int summa = 0;
        for (int i = niz; i <= verh; i++) 
        {
            summa += i * i;
        }
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n", niz * niz, verh * verh, summa);
        printf("Введите следующую комбинацию пределов: ");
    }
    return 0;
}
