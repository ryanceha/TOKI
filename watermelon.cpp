#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	if (x > 2)
	{
		if (x % 2 == 0)
		{
			printf("YES");
		}
		else 
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
}
