#include<stdio.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int stroki = 6;
    int index = 0;
    for(int i = 1; i <= stroki; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c", lets[index]);
            index++;
        }
        printf("\n");
    }
    return 0;
}
