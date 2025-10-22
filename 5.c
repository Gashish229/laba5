#include<stdio.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char konec;
    int index;
    printf("Введите букву от A до Z: ");
    scanf("%c", &konec);
    for(index = 0; index < 26; index++)
    {
        if (lets[index] == konec)
        {
            break;
        }
    }
    int stroki = index + 1;
    for(int i = 0; i < stroki; i++)
    {
        for(int probel = 0; probel < stroki - i - 1; probel++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c", lets[j]);
        }
        for(int j = i - 1; j >= 0; j--)
        {
            printf("%c", lets[j]);
        }
        printf("\n");
    }
    return 0;
}
