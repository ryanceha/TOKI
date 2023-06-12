#include <cstdio>
#include <string.h>
int main()
{
	char a[100], b[100];
	printf("INPUT : ");
	scanf("%s %s", &a, &b);
	
	int lena = strlen(a);
	int lenb = strlen(b);
	
	if (a[lena - 1] == b[lenb - 1])
	{
		printf("LOVE");
	}
	else if (a[0] == b[0])
	{
		printf("FRIENDSHIP");
	}
	else
	{
		printf("STRANGER");
	}
}
