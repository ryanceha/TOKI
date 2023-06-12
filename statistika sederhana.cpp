#include <cstdio>

int main ()
{
	int x, i, max, min;
	int jumlah[1000];
	scanf("%d", &x);
	for ( i = 1 ; i <= x ; i++)
	{
		scanf("%d", &jumlah[i]);
	}
	max = jumlah [1];
	min = jumlah [1];
	
	for (i = 1 ; i <= x ; i++)
	{
		if (jumlah[i] >= max)
		{
			max = jumlah[i];
		}
		else if (jumlah [i] <= min)
		{
			min = jumlah[i];
		}
	}
	printf("%d %d\n", max, min);
}
