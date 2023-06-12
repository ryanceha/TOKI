#include <cstdio>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int a[x][y], b[y][z], c[x][z];
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < y ; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0 ; i < y ; i++)
	{
		for (int j = 0 ; j < z ; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < z ; j++)
		{
			c[i][j] = 0;
		}
	}
	for (int i = 0; i < x ; i++)
	{
		for(int j = 0 ; j < z ; j++)
		{
			for (int k = 0 ; k < y ; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0 ; i < x; i++)
	{
		for (int j = 0 ; j < z ; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
