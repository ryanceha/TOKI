#include <cstdio>

int main ()
{
	int x;
	scanf("%d", &x);
	if (x<10)
	{
		printf("satuan");
	} else if (x <100)
	{
		printf("puluhan");
	} else if (x <1000)
	{
		printf("ratusan");
	} else if (x<10000)
	{
		printf("ribuan");
	} else if (x<100000)
	{
		printf("puluhribuan");
	}
}
