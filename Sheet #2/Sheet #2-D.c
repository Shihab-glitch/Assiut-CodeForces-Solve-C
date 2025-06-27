#include <stdio.h>
int main()
{
	int cpass = 1999;
	int pass;
	for (int i=0; i<10000; i++)
	{
		scanf("%d", &pass);
		if (pass == cpass)
		{
			printf("Correct\n");
			break;
		}
		else {printf("Wrong\n");}
	}
	return 0;
}
