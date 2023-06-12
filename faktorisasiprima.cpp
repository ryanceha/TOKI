#include <cstdio>
int pangkat = 0;
int z = 1;
bool faktor(int x)
{
	int i = 2;
	bool prima = true;
	
	if (x==1)
	{
		prima = 0;
	}
	else if (x == 2)
	{
		prima = 1;
	}
	else if((x > 2) && ((x % 2) == 0))
	{
		prima = 0;
	}
	else
	{
		while ((i*i) <= x)
		{
			if ((x % i == 0))
			{
				prima = 0;
				break;
			}
			i++;
		}
	}
	return prima;
}
int main()
{
	int x, i, pangkat, faktorke = 1, m;
	scanf("%d", &x);
	i = 2;
	while ( i <= x)
	{
		pangkat = 0;
		if (faktor(i))
		{
			while ((x % i) == 0)
			{
				pangkat++;
				x/=i;
			}
		}
		if (faktorke == 1)
		{
			if (pangkat == 1)
			{
				printf("%d", i);	
			}
				else if (pangkat > 1)
			{
				printf("%d^%d", i, pangkat);
			}
			else 
			{
				faktorke--;
			}	
		}
		else 
		{
			if (pangkat == 1)
			{
				printf(" x %d", i);
			}
			else if (pangkat > 1)
			{
				printf(" x %d^%d", i, pangkat);
			}
			else
			{
				faktorke--;
			}
		}
		i++;
		faktorke++;
	}
}
