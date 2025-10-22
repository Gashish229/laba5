#include<stdio.h>
int main(void)
{
    int verh, niz;
    printf("Введите верхний предел: ");
    scanf("%d", &verh);
    printf("Введите нижний предел: ");
    scanf("%d", &niz);
    if (niz > verh)
    {
        printf("Ошибка");
        return 1;
    }
    printf("Число\tКвадрат\tКуб\t");
    for(int i = niz; i <= verh; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}
