#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string s = "Toki";
	for (int i = 0 ; i < s.size(); i++)
	{
		s[i] = s[i] - ('a' - 'A');
	}
	printf("%s\n",s.c_str());
}
