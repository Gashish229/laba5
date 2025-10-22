#include<stdio.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int stroki = 6;
    for(int i = 0; i < stroki; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", lets[5 - j]);
        }
        printf("\n");
    }
    return 0;
}
