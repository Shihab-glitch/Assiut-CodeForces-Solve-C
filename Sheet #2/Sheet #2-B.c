#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		if (n>1)
		{
			if (i%2==0)
			{printf("%d\n", i);}
		}
		else {printf("-1\n");}
	}
	return 0;
}
