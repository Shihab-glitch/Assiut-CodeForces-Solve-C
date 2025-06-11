#include <stdio.h>
int main() 
{
    int A, B, C, temp;
    scanf("%d %d %d", &A, &B, &C);
    int oA = A, oB = B, oC = C;

    if (A > B) 
    {
        temp = A; A = B; B = temp;
    }
    if (A > C) 
    {
        temp = A; A = C; C = temp;
    }
    if (B > C) 
    {
        temp = B; B = C; C = temp;
    }

    printf("%d\n%d\n%d\n", A, B, C);
    
    printf("\n");

    printf("%d\n%d\n%d\n", oA, oB, oC);

    return 0;
}  