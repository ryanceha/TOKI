#include <stdio.h>

int main()
{
//	
//	for (int i = 0;i<25;i++)
//	{
//		printf("%d ", i);
//	}
//	int i = 0;
//	do{
//		printf("aku\n");
//		i++;	
//	}
//	while(i != 25);
//
//	int i = 25;
//	while(i!=25)
//	{
//		puts("Aku");
//		i++;	
//	}
	int panjang;
	printf("Masukkan panjang : ");
	scanf("%d", &panjang);
	
	for(int i = 0; i<panjang;i++)
	{
		for (int j = 0; j <= panjang-i; j++)
		{
			printf(" ");
		}
		for (int j = 1 ; j <= i*2+1 ; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
