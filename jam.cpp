#include <cstdio>

int main()
{
	int x, jam, menit, detik;
	printf("Input Detik berapa yang ingin di konvert : ");
	scanf("%d", &x);
	
	jam = x / 3600;
	menit = (x % 3600) / 60;
	detik = (x % 3600) % 60;
	if (jam < 0)
	{
		printf("jam 00 menit %d detik %d", menit, detik);
	}
	else
	{
		printf("jam %d menit %d detik %d", jam, menit, detik);
	}
}
