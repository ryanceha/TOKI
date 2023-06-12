#include <cstdio>

int main ()
{
	int a[1000];
	int i = 0;
	while(scanf("%d", &a[i]) != EOF)
	{
		i++;
	}
	for ( i =  i - 1 ; i >= 0 ; i--)
	{
		printf("%d\n", a[i]);
	}
}
