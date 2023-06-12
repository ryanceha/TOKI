#include <cstdio>
bool pernah[100];
char catat[100];
void tulis(int kedalaman, int N)
{
	if (kedalaman >= N) //Cetak Password
	{
		for (int i = 0 ; i < N;i++)
		{
			printf("%d", catat[i]); //Printed
		}
		printf("\n");
	}
	else
	{
		for (int i = 1 ; i <= N ; i++)//Masuk ke lapisan lebih dalam
		{
			if(!pernah[i]) //i belum pernah?
			{
				pernah[i] = true; //Gunakan True dulu karena harus dicatat
				catat[kedalaman] = i; //Catat disini
				tulis(kedalaman + 1, N);
				pernah[i] = false; //Menandakan bahwa i sudah pernah dicetak
			}
		}
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	tulis(0, N);
}
