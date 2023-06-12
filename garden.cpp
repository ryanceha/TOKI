#include <stdio.h>

int main()
{
	int x, y,	t, a, b, nilai, posisi[100][100];
	scanf("%d %d", &x, &y);
	for (int i = 1 ; i <= x ; i++)
	{
		for (int j = 1 ; j <= y ; j++)
		{
			scanf("%d", &posisi[i][j]);
		}
	}
	scanf("%d", &t);
	for (int i = 1 ; i <= t ; i++)
	{
		scanf("%d %d %d", &a, &b, &nilai);
		posisi[a][b] = nilai;
	}
	for (int i = 1 ; i <= x ; i++)
	{
		for (int j = 1 ; j <= y ; j++)
		{
			if (j == y)
			{
				printf("%d", posisi[i][j]);
			}
			else
			{
			printf("%d ", posisi[i][j]);
			}
		}
		printf("\n");
	}
}
