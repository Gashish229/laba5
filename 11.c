#include<stdio.h>
int main(void)
{
    const razmer = 8;
    int chisla[razmer];
    printf("Введите %d целых чисел: ", razmer);
    for (int i = 0; i < razmer; i++)
    {
        scanf("%d", &chisla[i]);
    }
    for (int i = razmer - 1; i >= 0; i--)
    {
        printf("%d ", chisla[i]);
    }
    return 0;
}
