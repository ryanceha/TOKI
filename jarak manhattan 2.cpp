#include <cstdio>
#include <cmath>

int main()
{
	int x1,y1,x2,y2, h, x, y;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	x = x1 - x2;
	y = y1 - y2;
	if(x<0)
	{
		x = -x;
	}
	if(y<0)
	{
		y =-y;
	}
	h = x + y;
	printf("%d", h);
}
