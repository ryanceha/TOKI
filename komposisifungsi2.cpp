#include <cstdio>

int abs(int x)
{
	if( x >= 0 )
	{
		return x;
	}
	else
	{
		x *= -1;
		return x;
	}
}


int fx (int a, int b, int k, int x)
{
	if ( k == 1 )
	{
		return abs(a*x + b);	
	}
	else 
	{
		return abs(a*fx(a, b, k-1, x) + b);
	}
}

int main()
{
	int a, b, k, x;
	scanf("%d %d %d %d", &a, &b, &k, &x);
	printf("%d", fx(a, b, k, x));
}
