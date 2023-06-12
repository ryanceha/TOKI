#include <cstdio>

int abs(int x)
{
	if (x >= 0)
	{
		return x;
	}
	else
	{
		x *= -1;
		return x;
	}
}
int poww(int a, int b)
{
	int temp = a;
	for (int i = 1 ; i < b; i++)
	{
		a = a*temp;
	}
	return a;
}
int TingkatKedengkatan(int X, int x, int Y, int y, int e)
{
	int a = abs(x-X);
	int b = abs(y-Y);
	int hasil = poww(a,e) + poww(b, e);
	return hasil;
}
int main()
{
	int a,b,c,d,e, hasil;
	int x[1000][3];
	int max = 0;
	int min = 10000;
	
	scanf("%d %d", &a, &e);
	for (int i = 0 ; i < a ; i++)
	{
		for (int j = 0 ; j < 2 ; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	for(int i = 0 ; i < a ; i++)
	{
		for(int j = 1 ; j < a ; j++)
		{
			hasil = TingkatKedengkatan(x[j][0], x[i][0], x[j][1], x[i][1], e);
			if (hasil > max)
			{
				max = hasil;
			}
			if (hasil < min)
			{
				min = hasil;
			}
		}
	}
	printf("%d %d", min, max);
}
