#include <cstdio>
int x,y,z, p, q, s, t;
int a[2][1000] = { 0 }, b[1000] = { 0 };
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}
int main()
{

	scanf("%d", &x);
	for ( int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < x ; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &y);
	for (int i = 0 ; i < y ; i++)
	{
		char buff1[5], buff2[5];
		scanf("%s %d %s %d", buff1, &s, buff2, &t);
		
		p = buff1[0] - 'A';
		q = buff2[0] - 'A';
		s--;
		t--;
		swap(a[p][s], a[q][t]);
	}
	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < x ; j++)
		{
			printf("%d", a[i][j]);
			if (j + 1 < x)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
