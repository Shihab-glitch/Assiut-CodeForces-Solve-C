#include <stdio.h>
int main()
{
    char a[100000];
    scanf("%s",a);
    for(int i=0; (a[i]!='\0'); i++)
	{
        if(a[i]==',')
        {
            printf(" ");
        }
        else
        {
            if(a[i]>=65 && a[i]<=90)
            {
                printf("%c",a[i]+32);
            }
            else if(a[i]>=97 && a[i]<=122)
            {
                printf("%c",a[i]-32);
            }
        }
    }
    printf("\n");
    return 0;
}
