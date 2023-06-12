#include <cstdio>
#include <cmath>

int main()
{
	int x, y, z;
	scanf("%d", &x);
	y = 1;
	z = x;
	int i = 1;
	while (i*i <= z)
	{
		if( z % i == 0)
		{
			int j = z/i;
			if (abs(y-z) > abs(i-j))
			{
			y = i;
			z = j;
			}
		}
		i++;
	}
	printf("%d %d", y, z);
}
