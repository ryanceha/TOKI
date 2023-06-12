#include <cstdio>
#include <windows.h>
int main()
{
	while (true)
	{
		int x;
		scanf("%d", &x);
		system("cls");
		for (int i = 0 ; i < x ; i++)
		{
			for (int j = 0 ; j < x - i ; j++)
			{
				printf(" ");
			}
			for (int j = 0 ; j < i*2 - 1 ; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = x ; i > 0 ; i--)
		{
			for (int j = x - i ; j > 0 ; j--)
			{
				printf(" ");
			}
			for (int j = i*2 - 1 ; j > 0 ; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
