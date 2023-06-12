#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    printf("INPUT : ");
    scanf("%[^\n]", &a); //string nya membutuhkan lebih dari 1 kata, harus pake enter

    int len = strlen(a);
    for (int i = 0 ; i < len ; i++) //urutan/array dari setiap karakter
    {
    	if (a[i] == ' ') //spasi
    	{
    		printf(" ");
		}
		else
		{
			if (a[i] > 'a' && a[i] < 'z') //huruf kecil
			{
		        int urut = a[i] - 'a'; //misalkan urutannya dari b "98"
		        int enkripsi = (urut + 13) % 26;
		        a[i] = enkripsi + 'a';
		        printf("%c", a[i]);
    		}
    		else if (a[i] > 'A' && a[i] < 'Z') //huruf besar
    		{
    			int urut = a[i] - 'A';
		        int enkripsi = (urut + 13) % 26;
		        a[i] = enkripsi + 'A';
		        printf("%c", a[i]);
			}
			else
			{
				printf("%c", a[i]);
			}
    	}
    }
}
