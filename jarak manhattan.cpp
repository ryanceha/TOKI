#include <cstdio>
#include <cmath>

int main()
{
	int x1;
	int y1;
	int x2;
	int y2;
	
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	int jml = abs(x1 - x2) + abs(y1 - y2);
	
	printf("%d", jml);
}
