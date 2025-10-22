#include<stdio.h>
int main()
{
    char alphavit[26];
    for (int i = 0; i < 26; i++)
    {
        alphavit[i] = 'a' + i;
        printf("%c ", alphavit[i]);
    }
    return 0;
}
