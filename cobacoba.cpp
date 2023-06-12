#include <cstdio>
#include <string.h>
char isletter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) 
	{
		return c;
		return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	}
	else
	{
		int a = c;
		return '\n';
		return a;
	}
}

int main()
{
	char a[11], b[11], c[11];
	int d = 0, e = 0, f = 0;
	
	scanf("%[^0-9]%d%[^0-9]%d%[^0-9]%d", a, &d, b, &e, c, &f);//Regex dapat digunakan bukan hanya untuk end line, tapi untuk karakter apapun
	printf("%-10s%d\n", a, d);
	printf("%-10s%d\n", b, e);
	printf("%-10s%d\n", c, f);
}
