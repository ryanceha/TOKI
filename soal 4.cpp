#include <cstdio>
#include <windows.h>

int main()
{
	int a,b;
	char x;
	char p = '%';
	printf("INPUT : ");
	while (true)
	{
		scanf("%d %c %d", &a, &x, &b);
		system("cls");
		if (x == '+') //char harus pake ' '
		{
			printf("INPUT : %d + %d = %d\n", a, b, (a+b));
			printf("INPUT : ");
		}
		else if (x == '-')
		{
			printf("INPUT : %d - %d = %d\n", a, b, (a-b));
			printf("INPUT : ");
		}
		else if (x == '*')
		{
			printf("INPUT : %d * %d = %d\n", a, b, (a*b));
			printf("INPUT : ");
		}
		else if (x == '/')
		{
			printf("INPUT : %d / %d = %d\n", a, b, (a/b));
			printf("INPUT : ");
		}
		else if (x == '%')
		{
			printf("INPUT : %d %c %d = %d\n", a, p, b, (a % b));
			printf("INPUT : ");
		}
		else 
		{
			printf("INPUT : -1\n");
			printf("INPUT : ");
		}
	}
}
