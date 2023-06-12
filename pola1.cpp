#include <cstdio>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	for (int i = 1 ; i <= x ; i++)
	{
		if ( i % y == 0)
		{
			printf("* ");
		} else
		printf("%d ", i);
	}
}
