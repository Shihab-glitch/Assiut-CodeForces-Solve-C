#include <stdio.h>
int main() 
{
    int A, B;
    char operator;
    scanf("%d %c %d", &A, &operator, &B);

    if (operator == '+')
    {
        printf("%d\n", A + B);
    } 
    else if (operator == '-') 
    {
        printf("%d\n", A - B);
    } 
    else if (operator == '*') 
    {
        printf("%d\n", A * B);
    } 
    else if (operator == '/') 
    {
        if (B != 0) 
        {
            printf("%d\n", A / B);
        } 
        else 
        {
            printf("Division by zero is not allowed.\n");
        }
    } 
    else 
    {
        printf("Invalid operator.\n");
    }
    return 0;
}