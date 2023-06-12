#include <cstdio>

int main()
{
	int x, y, count, test;
	scanf("%d", &x);
	for (int i = 1 ; i <= x ; i++)
	{
		scanf("%d", &y);
		count = 0;
		for (int j = 1 ; j*j <= y ; j++)
		{
			if (y % j == 0)
			{
				count++;
			}
		}
		if (count <= 2)
		{
			printf("YA\n");
		}
		else 
		{
			printf("BUKAN\n");
		}
	}
}
