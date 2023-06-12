#include <cstdio>

int main()
{
	int x, jml;
	jml = 0;
	while(scanf("%d", &x) != EOF)
	{
		jml += x;
	}
	printf("%d", jml);
}
