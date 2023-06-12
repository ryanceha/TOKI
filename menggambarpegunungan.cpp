#include <cstdio>


using namespace std;

void pegunungan(int x) //void tidak ada nilai return, jadi boleh menggunakan printf disini untuk mengeluarkan sesuatu yang dikehendaki
{
	if(x <= 1 )
	{
		printf("*\n");
	}
	else 
	{
		pegunungan(x-1);
		for(int i = 0 ; i < x ; i++)
		{
			printf("*");
		}
		printf("\n");
		pegunungan(x-1);
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	pegunungan(a);
}
