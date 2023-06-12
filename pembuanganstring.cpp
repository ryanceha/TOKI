#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s,t;
	scanf("%[^\n]", s);
	scanf("%[^\n]", t);
	
	int sizeofs = strlen(s);
	int sizeoft = strlen(t);
	for(int j = 0; j < sizeoft; j++){
		for (int i = 0 ; i < sizeofs ; i++)
	{
		if (s[j] == t[i])
		{
			s.erase(j, 1);
		}
	}
	}
	
	
	printf("%c", s[i]);
}
