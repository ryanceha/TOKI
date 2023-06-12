#include <cstdio>

int main()
{
	int n, x, count[1000];
	scanf("%d", &n);
	
	for (int i = 1 ; i <= 1000 ; i++)
	{
		count[i] = 0;
	}	
	for (int i = 0 ; i < n ; i++)
	{
		scanf("%d", &x);
		count[x]++;
	}
	
	int min = 0;
	int modus;
	
	for (int i = 1 ; i <= 1000 ; i++)
	{
		if (count[i] >= min)
		{
			min = count[i];
			modus = i;
		}
	}
	printf("%d\n", modus);
	return 0;
}
