#include <stdio.h>
int main()
{
	int t, n;
	scanf("%d", &t);
	int even = 0, odd = 0, positive = 0, negative = 0;
	for (int i=0; i<t; i++)
	{
		scanf("%d", &n);
		if (n%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		if (n>0)
		{
			positive++;
		}
		else if (n<0)
		{
			negative++;
		}
	}
	printf("Even: %d\n", even);
	printf("Odd: %d\n", odd);
	printf("Positive: %d\n", positive);
	printf("Negative: %d\n", negative);
	return 0;
}
