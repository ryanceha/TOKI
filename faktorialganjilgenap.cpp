#include <cstdio>

int gg(int x)
{
	if (x <= 0 )
	{
		return 1;
	}
	else if( x % 2 == 0)
	{
		return x*gg(x-1)/2;
	}
	else if ( x % 2 == 1)
	{
		return x*gg(x-1);
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", gg(x));
}

