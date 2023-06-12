#include <cstdio>

int fibonacci(int x)
{
	if ( x <= 1)
	{
		return x;
	}
	else
	{
		return fibonacci(x-1) + fibonacci(x-2);
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", fibonacci(x));
}
