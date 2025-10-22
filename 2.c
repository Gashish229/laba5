#include<stdio.h>
int main(void)
{
    int stroki = 5;
    for(int i = 1; i <= stroki; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");  
    }
    return 0;
}
