#include<stdio.h>
int main(void)
{
    const razmer = 8;
    int power[razmer];
    for (int i = 0; i < razmer; i++)
    {
        power[i] = 1;
        for (int j = 0; j < i; j++)
        {
            power[i] *= 2;
        }
    }
    int i = 0;
    printf("Первые %d степеней двойки: \n", razmer);
    do
    {
        printf("2^%d = %d\n", i, power[i]);
        i++;
    } while (i < razmer);
    return 0;
}
