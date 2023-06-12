#include <cstdio>

int main()
{
	int x, u, total;
	scanf("%d", &x);
	total = 0;
	for ( int i = 0 ; i < x ; i++)
	{
		scanf("%d", &u);
		total = total + u;
	}
	printf("%d", total);
}
