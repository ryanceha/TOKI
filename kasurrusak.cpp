#include <cstdio>
#include <string.h>

using namespace std;

char a[100];

bool kasur(int x, int y, int z)// x = huruf pertama y = huruf terakhir z = kata tengah
{
	if( z == 0) //jika z = 0, berarti cuman ada 1 huruf saja
	{
		return true;
	}
	else 
	{
		if(a[x] == a[y]) // jika huruf pertama dan terakhir sama, maka
		{
			return kasur ( x + 1, y - 1, z - 1); //a[0] -> a[1]  & a[terakhir] - a[terakhir - 1] potensi sebelum kata tengah di kurang 1
		}
		else
		{
			return false; //huruf kesatu dan kedua tidak sama, sistem mengatakan salah dan langsung di print "BUKAN"
		}
	}
}

int main()
{
	scanf("%s", &a);
	int len = strlen(a); //berapa jumlah huruf, misalkan 'kodok' = 5
	if(kasur(0, len - 1, len/2)) //len / 2 = 5/2 = 2, berarti ada 2 kemungkinan huruf bisa dihitung maksimal
	{
		printf("YA");
	}
	else
	{
		printf("BUKAN");
	}
}
