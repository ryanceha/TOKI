#include <cstdio>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    char a[101];
    string y[100];
    int i = 0;
    while (scanf("%s", &a) != EOF)
    {
        y[i] = a;
        i++;
    }
    int j = 0;
    int gkblh;  
    do
    {
    	string s = y[j];
    	printf("%s\n", s.c_str());
    	j++;
	}
	while (y[j] != "");
}
