#include <stdio.h>
#include <math.h>
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	float X = floor((float)A/B);
	float Y = ceil((float)A/B);
	float Z = round((float)A/B);
	printf("floor %d / %d = %.0f\n", A, B, X);
	printf("ceil %d / %d = %.0f\n", A, B, Y);
	printf("round %d / %d = %.0f\n", A, B, Z);
	return 0;
}
