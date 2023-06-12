#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <cstring>
//void hello()
//{
//	printf("Hello\n");
//}
//double cube (double num)
//{
//	double result = num * num * num;
//	return result;
//}
//int max(int num1, int num2, int num3) 
//{
//	int result; 
//	if(num1 >= num2 && num1 >= num3){
//		result = num1;
//	}
//	else if(num2 >= num1 && num2 >= num3){
//		result = num2;
//	}
//	else{
//		result = num3;
//	}
//	return result;
//}
struct Siswa{
		char nama [50]; 
		char jurusan[50];
		int usia;
		int nilai;
};

int main()
{
//	printf("    /|\n");
//	printf("   / |\n");
//	printf("  /  |\n");
//	printf(" /   |\n");
//	printf("/____|\n");
//	
//	return 0;

//	char nama[5] = "Ryan";
//	int usia = 18;
//	printf("pada suatu hari, %s\n", nama);
//	printf("dia berusia %d tahun\n", usia);
//	printf("%s sedang mengetik programming C\n", nama);
//	printf("%s sangat bermotivasi dan harus mengejar teman-temannya pada usia %d \n", nama, usia);
//	printf("%f", ceil(36.11123456) );

/* skrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrt */

//	const int = 8

//	int angka;
//	printf("Type out any number : \n");
//	scanf("%d",&angka);
//	printf("You typed %d", angka);	
//
//	double num1;
//	double num2;
//	printf("Tulis angka pertama : \n");
//	scanf("%lf",&num1);
//	printf("Tulis angka kedua : \n");
//	scanf("%lf",&num2);
//	printf("Hasil pertambahan adalah : %f", num1 + num2);
//
//
//	char warna [20];
//	char subjek [29];
//	char orang1 [20];
//	char orang2 [20];
//	
//	printf("Sebut warna : ");
//	scanf("%s", warna);
//	printf("Sebut subjek : ");
//	scanf("%s", subjek);
//	printf("Sebut orang : ");
//	scanf("%s%s",&orang1,&orang2);
//
//	printf("Oke jadi gini, ada warna %s\n", warna);
//	printf("Trus ada %s \n", subjek);
//	printf("Kalo misalkan keduanya dicampur, akan menjadi %s %s \n", orang1, orang2);

//	int angka[] = {4, 5 ,1 , 124, 43, 643, 234, 234234};
//	printf("%d", angka[5]);
	
//	printf("Top\n");
//	hello();
//	printf("Bottom");
//	
//	
//	printf("Answer : %f", cube(19.0));
//	
//	printf("%d", max(40,40));
//	
// 	printf("%d", max (100,2,33));
//	
//	if(3!=3 || 2>5)	{
//		printf("True");
//	}else {
//		printf("False");
//	}
//	
//	double angka1;
//	double angka2;
//	char op;
//	
//	printf("Enter a number : ");
//	scanf("%lf",&angka1);
//	printf("Enter operator : ");
//	scanf(" %c",&op);
//	printf("Enter another number : ");
//	scanf("%lf",&angka2);
//	
//	if(op == '+'){
//		printf("Your Answer : %f", angka1 + angka2);
//	} else if(op == '-'){
//		printf("Your Answer : %f", angka1 - angka2);
//	} else if (op == '*'){
//		printf("Your Answer : %f", angka1*angka2);
//	} else if (op == '/'){
//		printf("Your Answer : %f", angka1/angka2);
//	} else {
//		printf("Invalid Operator");
//	}
//	char grade;
//	printf("Enter Code : ");
//	scanf("%c",&grade);
//	
//	switch(grade){
//		case 'X':
//			printf("X");
//			break; 
//		case 'Y':
//			printf("Y");
//			break; 
//		case 'Z':
//			printf("Z");
//			break; 
//		case 'S':
//			printf("S");
//			break; 
//		default : 
//			printf("Invalid Code");
//	}
////	
//	struct Siswa siswa1;
//	siswa1.usia = 99;
//	siswa1.nilai = 99;
//	strcpy( siswa1.nama, "Kaliber");
//	strcpy( siswa1.jurusan, "UI Hukum");
//	
//	printf("%d", siswa1.nilai);

//	int index = 6;
//	do{
//		printf("%d\n", index);
//		index++;
//	}
//	while(index <= 5);
//
//	int num = 979;
//	int guess;
//	int GC = 0;
//	int GL = 3;
//	int habis = 0;
//	
//	while(guess != num && habis == 0){
//		if(GC < GL){
//			printf("Enter a Number : \n");
//			scanf("%d", &guess);
//			GC++;
//		} else {
//		
//			habis = 1;
//		}
//	}
//	if(habis == 1){
//		printf("oopsie u ded");
//	}else{
//	
//	printf("Wuw benar!");
//	}
//	int i = 1;
//	while (i <=5){
//		printf("%d\n", i);
//		i++;
//	}
//	int num[] = { 1, 27, 36, 49, 5000};
//	
//	int i;
//	for(i = 0; i < 6;i++){
//		printf("%d\n", num[i]);
//	}
//	
//	int nums[3][2] = {
//					{1,2},
//					{3,4},
//					{5,6},
//					};
//	int i, j;
//	for(i = 0; i < 3; i++){
//		for(j = 0; j < 2; j++){
//			printf("%d,", nums[i][j]);
//		}
//		printf("\n");
//	}	
//	
//	int usia = 30;
//	int * pUsia = &usia;
//	double nilai = 3.4;
//	double * pNilai = &nilai
//	char kode = 'X';
//	char * pKode = &kode
//	
//	printf("usia : %p\n nilai : %p\nkode : %p",&usia,&nilai,&kode);
//	
//	int usia = 30;
//	int *pUsia = &usia;
//	
//	printf("%d", *pUsia);
//
//
//	FILE * fptr = fopen("proto.txt", "w");
//	
//	fprintf(fptr, "X, Xtrmntr");
//
//


}


