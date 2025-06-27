#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for (int i=t; i>0; i--)
	{
		int n;
		scanf("%d", &n);
		long long int fact = 1;
		for (int j=n; j>0; j--)
		{
			fact = fact*j;
		}
		printf("%lld\n", fact);
	}
	return 0;
}
