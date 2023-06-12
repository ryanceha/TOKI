#include <cstdio>

int main ()
{
	int x,y;
	scanf("%d", &x);
	
	for (int i = 1 ; i <= x ; i++)
	{
		scanf("%d", &y);		
		
		bool prima = true;
		if (y == 1)
		{
			prima = false;
		}	
		int j = 2;
		while (j*j <= y)
		{
			if (y % j == 0)
		{
			prima = false;
		}
		j++;
		}
		
		if(prima)
			{
				printf("YA\n");
			}
		else 
			{
				printf("BUKAN\n");
			}
	
	}
}
