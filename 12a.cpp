#include <cstdio>

int jdd(int x)
{
	if (x == 0)
	{
		return 0 ;
	}
	else
	{
		return jdd(x/100) + (x % 100);
	}	
}
int main()
{
	printf("%d", jdd(19823));
}
