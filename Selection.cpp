#include <stdio.h>

int main ()
{
//	int angka;
//	printf("Maasukkan angka : ");
//	scanf("%d",&angka);
//	if(angka%2 ==0)
//	{
//		printf("Angka nya genap bouz");
//	}
//	else
//	{
//		printf("Angka nya ganjil bouz");
//	}

	int angka;
	scanf("%d",&angka);
	switch (angka-2)
	{
		case 0:
			puts("Genap");
			break;
		case 1:
			puts("Ganjil");
			break;
		default:
			puts("Bukan angka bos");
			break;
	}

}
