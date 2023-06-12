#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string s;
	scanf("%s", s.c_str());
	s.erase(1,4);
	
	printf("%s\n", s.c_str());
}
