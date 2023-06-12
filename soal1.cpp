#include <cstdio>

int main()
{
	int a;
	printf("NILAI : ");
	scanf("%d", &a);
	printf(a > 100 || a < 0 ? "disuruh input nilai bukan imajinasi lu"  : a > 91 ? "A" : a > 81 ? "B" : a > 71 ? "C" : a > 61 ? "D" : "E");
}
