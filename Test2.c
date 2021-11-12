#include <stdio.h>

int main()
{
    int noni = 0, mama = 0;
    scanf("%i%i", &noni, &mama);
    for (int i = noni + 1 ; mama > i ; i++)
    {
    printf("%i\n", i);
    }
    printf("%i\n", (mama - noni - 1));
}