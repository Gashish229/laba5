#include<stdio.h>
#include<string.h>
int main(void)
{
    char slovo[100];
    printf("Введите слово: ");
    scanf("%s", slovo);
    int dlina = strlen(slovo);
    printf("Слово в обратном порядке: ");
    for(int i = dlina - 1; i >= 0; i--)
    {
        printf("%c", slovo[i]);
    }
    return 0;
}
