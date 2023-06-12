#include <cstdio>

int main()
{
	int x;
	scanf("%d", &x);
	
	int nilai[x];
	for (int i = 0 ; i < x ; i++)
	{
		scanf("%d,", & nilai[i]);
	}
	int total = 0;
	for (int i = 0 ; i < x; i++)
	{
		total += nilai[i];
	}
	int lulus = 0;
	for (int i = 0 ; i < x ; i++)
	{
		if (nilai[i] * x >= total)
		{
		lulus++;
		}	
	}
	printf("%d\n", lulus);
}
