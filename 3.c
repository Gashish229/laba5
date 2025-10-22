#include<stdio.h>
int main(void)
{
    char start = 'F';
    int stroki = 6;
    for(int i = 0; i < stroki; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", start - j);
        }
        printf("\n");
    }
    return 0;
}
