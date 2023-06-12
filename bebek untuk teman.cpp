#include <cstdio>
#include <cmath>
int main ()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	int bagi = x / y;
	int sisa = x % y;
	printf("masing-masing %d\n", bagi);
	printf("bersisa %d\n", sisa);
	
}
