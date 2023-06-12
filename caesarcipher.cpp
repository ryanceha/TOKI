#include <stdio.h>
#include <string.h>

using namespace std;
char s[100];
int x;
int main()
{
	scanf("%s", &s);
	scanf("%d", &x);
	
	int len = strlen(s);
	for (int i = 0 ; i < len ; i++)
	{
		int urut = s[i] - 'a'; // untuk mengetahui urutan ke brp dari a ke z
		int enkripsi = (urut + x) % 26;
		s[i] = enkripsi + 'a';
 	}
	for(int i = 0 ; i < len ; i++)
	{
		printf("%c", s[i]);
	}
}
