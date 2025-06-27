#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int temp = 0;
	for (int i=0; i<t; i++)
	{
		int n;
		scanf("%d", &n);
		if (n>temp)
		{temp=n;}
	}
	printf("%d", temp);
	return 0;
}
