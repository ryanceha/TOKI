#include <cstdio>
int a,b;
int hasil [105][105];
int main()
{

	scanf("%d %d", &a, &b);
	
	for (int i = 0 ; i < a ; i++)
	{
		for (int j = 0 ; j < b ; j++)
		{
			scanf("%d", &hasil[i][j]);
		}
	}
	for (int j = 0 ; j < a ; j++)
	{
		for (int i = b-1  ; i >= 0 ; i--)
		{
			printf("%d", hasil[i][j]);
			if ( i > 0)
			{
				printf(" ");
			} 
			else
			{
				printf("\n");
			}
		}
	}
}
