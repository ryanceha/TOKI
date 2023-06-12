#include <stdio.h>

int main(){
	int input;
	printf("Masukkan Panjang Sisi : ");
	scanf("%d", &input);
	int current=input;
	for(int i = 1 ;  i<=input;i++){
		for(int j=1;j<=current;j++){
			for (int k=1;k<=current;k++){
				printf("#");
			}
			puts("");
		}
		current -= 1;
		puts ("");
	}	

}
