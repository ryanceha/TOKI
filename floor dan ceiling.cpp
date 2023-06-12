#include <cstdio>

int main()
{
	float x;
	scanf("%f", &x);
	int f,c;
	if (x>=0)
	{
		if((int)x == x)
		{
			f = (int)x;
			c = (int)x;
		}
		else
		{
			f = (int)x;
			c = (int)x + 1;
		}
	}
	else
	{
		if ((int)x == x)
				{
			f = (int)x;
			c = (int)x;
		}
		else
		{
			f = (int)x - 1;
			c = (int)x;
		}
	}
	printf("%d %d\n", f, c);
}

