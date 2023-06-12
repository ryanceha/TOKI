#include <cstdio>
#include <cmath>

int a, b;

int fungsi (int x)
{
	int hasil = abs(a*x + b);
	
	return hasil;
}
int main()
{
	int k, z;
	scanf("%d %d %d %d", &a, &b, &k, &z);
	
	for (int i = 0 ; i < k ; i++)
	{
		z = fungsi(z);
	}
	printf("%d", z);
}
