#include <stdio.h>
int main()
{
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld", ((A%10)+(B%10)));
	return 0;
}
