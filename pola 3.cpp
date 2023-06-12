#include <cstdio>

int main ()
{
	int x;
	scanf("%d", &x);
	int k = 0;
	for (int i = 1 ; i <= x ; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			if (k >= 10)
			{
				k = 0;
			}
			printf("%d", k);
			k++;
		}
		printf("\n");
	}
}
