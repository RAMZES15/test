#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%i", &a);
    for (int i = 1; a > i ; i++)
    {
        if (i * i > a)
        {
        printf("%i\n", i);
        break;
        }
    }
}