#include <cstdio>
int x, a, b, c, hasil ;
int swap(int x)
{
	int temp = x;
	int ret = 0;
	
	while(temp > 0)
	{
		ret = (ret * 10) + (temp % 10);
		temp = temp / 10;
	}
	
	return ret;
}
int main()
{

	scanf("%d %d", &a, &b);
	int y = swap(a);
	int z = swap(b);
	c = y + z;
	int hasil = swap(c);
	printf("%d", hasil);
}
