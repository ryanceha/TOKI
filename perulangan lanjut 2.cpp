#include <cstdio>
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 1 ; i <= x ; i++) // Barisan Enter
	{
		for (int j = 1 ; j <= (x - i) ; j++) // Spasi
		{
			printf("  ");
		}
		for (int k = 1 ; k <= i ; k++) // Bintang Geming
		{
			printf("* ");	
		}
		printf("\n");
	}
}
