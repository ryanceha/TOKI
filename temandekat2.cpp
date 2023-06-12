#include <cstdio>

int abs(int a)
{
	if(a >= 0)
	{
		return a;
	}
	else
	{
		a *= -1;
		return a;
	}
}
int pow(int a, int b)
{
	int temp = a;
	for (int i = 0 ; i < b - 1; i++) // 2*3 = a * 2 * 2, jika 2*3, a cuman harus dikali 2 kali saja karena a sudah termasuk i pertama
	{
		a = a*temp;
	}
	return a;
}
int TingkatKedekatan (int x, int X, int y, int Y, int d)
{
	int a = abs(X - x);
	int b = abs(Y - y);
	int result = pow(a,d) + pow(b,d);
	return result;
}
int main()
{
	int n, d, barisan[1000][3], pangkat, i, j, max = 0, min = 0;
	scanf("%d %d", &n, &pangkat);
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			scanf("%d", &barisan[i][j]);
		}
	}
	for ( i = 0 ; i < n ; i++)
	{
		for(j = i + 1 ; j < n ; j++)
		{
			int hasil = TingkatKedekatan(barisan[j][0], barisan[i][0], barisan[j][1], barisan[i][1], pangkat);
			if(max == 0 && min == 0)
			{
				max = hasil;
				min = hasil;
			}
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
