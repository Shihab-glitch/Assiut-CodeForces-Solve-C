#include <stdio.h>
int main() 
{
    int N, years, months, days;
    scanf("%d", &N);

    years = N / 365;
    N %= 365;
    months = N / 30;
    days = N % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}