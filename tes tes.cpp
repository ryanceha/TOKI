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
		printf("%d", a);
	}
	return a;
}
int TingkatKedengkatan(int a, int b, int c, int d, int e)
{
	int x = abs(b-a);
	int y = abs(d-c);
	int hasil = poww(x,e) + poww(y, e);
	return hasil;
}
int main()
{
	printf("%d", TingkatKedengkatan(2, 1, 2, 1, 1));
}
