#include <cstdio>

int main ()
{
	int x;
	scanf("%d", &x);
	
	int count = 0; //jumlah prima yang sudah ditemukan
	int cur = 2;//nilai yang akan diperiksa apakah prima / tidak
	
	while (count < x)
	{
		bool p = true;
		for (int i = 2 ; i <= cur-1 ; i++) 
		{
			if (cur % i == 0)
			{
				p = false;
				break;
			}
		}
	
	if (p)
	{ //ditemukan prima!
		printf("%d\n", cur);
		count++; // angka merupakan prima, dicetak
	}
	cur++; // nilai pindah dari 2 ke 3, 3 ke 4, dsb. periksa bilangan berikutnya
	}
	// count = N, program selesai
}
