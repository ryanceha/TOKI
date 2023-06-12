#include <cstdio>

int main ()
{
	int x;
	scanf("%d", &x);
	while ( x > 1 && x % 2 != 1)
	{
		x = x/2;
	}
	if (x == 1)
	{
		printf("ya");
	}
	else
	{
		printf("bukan");
	}
	return 0;	
}	
