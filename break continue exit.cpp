#include <cstdio>

int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 1 ; i <= x ; i++)
	{
		if ( i % 10 == 0 ) 
		{
			
			continue;
		}
		if ( i >= 42 )
		{
			printf("ERROR");
			break;
		}
		printf("%d\n", i);
	}
}
