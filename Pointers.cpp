#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int SIZE = 5;
void Increment (int *p)
{
	*p = (*p) + 1;
}
void print(char*C)
{
	int i = 0;
	while(C[i] != '\0')
	{
		printf("%c", C[i]);
		i++;
	}
	printf("\n");
}
int Double(int* A, int size)
{
	int i, sum = 0;
	for(i= 0; i < size ; i++)
	{
		A[i] = 2*A[i];
	}	
}
void printHelloWorld(){
	printf("Hello World\n");
}

int* Add(int* a, int* b) //Called function - returns pointer to integer
{ //a and b are pointers to integeres local to Add
	printf("Address of a in Add = %d\n", &a);
	printf("Value in a of Add (address of a of main) = %d\n", a);
	printf("Value at address stored in a of Add = %d\n", *a);
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) +(*b);
	return c;
}

int Add(int a, int b)
{
	return a+b;
}
void PrintHello(char *name){
	printf("Hello %s \n", name);
}
void A(){
	printf("Halo");
}
void B(void (*ptr)()){ //functino pointer as argument
	ptr(); // call-back function that "ptr" points to
}
int compare (const void* a, const void* b)
{
	int A = *((int*)a); //type casting to int* and getting value
	int B = *((int*)b);
	return B-A;
}
int compare(int a, int b)
{
	if (a>b) return -1;
	else return 1;
}
//callback function should compare to two integers, should return 1 if first element has higher rank, 0 if elements are equal and -1 if second element has higher rank
void BubbleSort(int *A, int n, int (*compare)(int,int)){
	int i,j,temp;
	for(i = 0; i<n ; i++)
		for(j=0; j < n-1; j++){
			if (compare(A[j],A[j+1]) > 0) { //compare A[j] with A[j+1] and SWAP if needed
				temp = A[j];
				A[j] = A[j +1];
				A[j+1] = temp;
		}
	}
}
int absolute_compare(int a, int b)
{
	if(abs(a) > abs(b)) return 1;
	return -1;
}
int cash = 100;
void Play(int bet){
	char C[3]= {'J', 'Q', 'K'};
	printf("Shuffling ...");
	srand(time(NULL)); //seeding random number generator
	int i;
	for(i = 0 ; i < 5; i++){
		int x = rand()%3;
		int y = rand()%3;
		int temp = C[x];
		C[x]= C[y];
		C[y]= temp; // swaps characters at position x and y
	}
	int playerGuess;
	printf("What's the position of queen - 1,2 or 3?");
	scanf("%d",&playerGuess);
	if(C[playerGuess - 1 ] == 'Q'){
		cash += 3*bet;
		printf("You win ! Result = \%c %c %c\ Total Cash = %d\n", C[0], C[1], C[2], cash);
		
	}
	else {
		cash -= bet;
		printf("You Lose ! Result = \%c %c %c Total Cash = %d\n", C[0], C[1], C[2], cash);	}
}
int main()
{
//	int x = 65;
//	int *p = &x;
//	printf("%d\n", *p);
//	*p = 66;
//	int**q = &p;
//	int***r = &q;
//	printf("%d\n", *p);
//	printf("%d\n", *q);
//	printf("%d\n", **q);
//	printf("%d\n", **r);
//	printf("%d\n", ***r);
//	***r = 10;
//	**q = 29;
//	printf("%d\n", x);
//	**q = *p + 40;
//	printf("%d\n", x);
//
//	int a;
//	a = 10;
//	Increment(&a);
//	printf("a=%d", a);
//
//	int A[] = {1,2,3,4,5,6};
//	int i;
//	int *p = A;
//	p++;
//	for(i = 0;i<6;i++)
//	{
//		printf("Address = %d\n", &A[i]);
//		printf("Address = %d\n", A + i);
//		printf("Address = %d\n", A[i]);
//		printf("Address = %d\n", *(A+i));
//	}
//

//	int A[] = {1,2,3,4,5};
//	int size = sizeof(A)/sizeof(A[0]);
//	int i;
//	Double(A,size);
//	for(i = 0; i < size ; i++)
//	{
//		printf("%d\n", A[i]);
//	}

//	char C[5] = {'J', 'O', 'H', 'N', '/0'};
//	printf("Size in bytes = %d\n", sizeof(C));
//	int len = strlen(C);
//	printf("Length = %d\n", len);

//	char C[20] = "Hello";
//	print(C);
	
//	int C[3][2][2]= {{{2,5}, {7,9}},
//					 {{3,4}, {6,1}},
//					 {{0,8}, {11,13}}
//					};
//	printf("%d %d %d %d\n", C, *C, C[0], C[0][0]);
//	printf("%d\n", *C[0][0]);
//	printf("%d\n", C[0][0][0]);
//	printf("%d\n", **C[0]);
//	printf("%d\n", ***C);
//	printf("%d\n", *(C+1));
//	printf("%d\n", *(C+2));	
//	printf("%d\n", **(C+1));			 
//	printf("%d\n", **(*C+1));	
//	printf("%d\n", *(*C[0]+1));
//	printf("%d\n", *C[0][0]+1);

//	int n;
//	printf("Enter size of array\n");
//	scanf("%d",&n);
//	int *A = (int*)malloc(n*sizeof(int));
//		for(int i =0 ; i < n; i++)
//	{
//		A[i] = i+1;
//	}
//	int *B = (int*)realloc(A,(n/2)*sizeof(int));
//	printf("Prev block address = %d, new address = %d\n", A,B);
//	for(int i = 0 ; i < 2*n ; i++)
//	{
//		printf("%d\n", B[i]);
//	}


//	int a = 2, b =4;
//	printf("Address of a in main = %d\n", &a);
//	// call by reference
//	int* ptr = Add(&a,&b);//value in x of main is copied of to a of Add
//					 //value in y of main is copied of to b of Add
//	printf("Sum = %d\n", *ptr);

//	int c;
//	int (*p)(int,int);
//	p = &Add; //function name will return us pointer
//	c = (*p)(2,3);//de-referencing and executing the function
//	printf("%d", c);
//	void(*ptr)(char*);
//	ptr = PrintHello;
//	ptr("Tom");

//	void(*p)() = A;
//	B(p);
//	printf("\n");
//	B(A); // A is callback function
	
//	int i, A[] = {3,2,1,5,6,4};
//	BubbleSort(A,6,compare);
//	for (i=0;i<6;i++)
//	printf("%d ", A[i]);
	
//	int i, A[] = {-31,22,-1,50,-6,4}; //{-1,4,-6,22,-31,50}
//	qsort(A,6, sizeof(int), compare);
//	for (i = 0; i<6;i++)
//	printf("%d ", A[i]);
//	BubbleSort(A,6,absolute_compare);
//	for(i=0;i<6;i++)
//	printf("%d ", A[i]);	
//
//	int bet;
//	printf("Welcome to the Virtual Casino \n");
//	printf("Total cash = $%d\n", cash);
//	while (cash > 0) {
//		printf("What's your bet ? $");
//		scanf("%d", &bet);
//		if(bet ==0 || bet > cash) break ;
//		Play(bet);
//		printf("\n*****************************************\n");
//	}	
	int i, j;
	int n[SIZE] = {15, 9, 1, 7, 5};
	for(i = 0 ; i <= SIZE ;i++)
	{
		printf("%5d", n[i]);
		for (j = 1 ; j <= n[i] ; j++)
		{
			printf("%c", "*");
			printf("\n");
		}
	}








	
}
