#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n>1)
	{
		int j = sqrt(n);
		int count = 0;
		for (int i=2; i<=j; i++)
		{
			if (n%i==0)
			{
				count++;
				break;
			}
		}
		if (count==0){printf("YES");}
		else {printf("NO");}
	}
	else {printf("Not Possible");}
	return 0;
}
