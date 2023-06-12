#include <stdio.h>


int main ()
{
	char nama [50];
	printf("Ketik Nama Anda : \n");
	scanf("%[^\n]", nama);
	printf("Nama Anda adalah %s\n", nama);
	
}


