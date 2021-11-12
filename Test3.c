#include <stdio.h>

int main()
{
    const char *week[8] = {"", "Понедельник", "вторник", "Среда", "четверг", "Пятница", "Суббота", "Воскресенье"};
    int day;
    scanf("%i", &day);
    if (day >= 1 && day <= 7)
        printf("%s\n", week[day]);
    else
        printf("error");
}