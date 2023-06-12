#include <cstdio>

int main ()
{
	int x;
	scanf("%d", &x);
	
	bool prima = true;
	for (int i = 2; i <= x -1; i++)
	{
		if ( x % i == 0)
		{prima = false;
		break;
		}
	}
	
	if (prima)
	{
		printf("%d adalah bilangan prima\n", x);
	}
	else
	{
		printf("%d bukan bilangan prima\n", x);
	}
}
