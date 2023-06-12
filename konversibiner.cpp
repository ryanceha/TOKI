#include <cstdio>
#include <string.h>
#include <string>

using namespace std;

int x; 
string convert(int x) //harus string karena kita disini menggunakan karakter secara berurutan dari belakang ke depan, jadi gk bisa pake integer

{
	if (x == 0)
	{
		return "0"; //kalo 0 ya 0
	}
	if (x == 1)
	{
		return "1"; //kalo 1 ya 1
	}
	else
	{
		if(x % 2 == 0) //jika genap, maka "bilangan dibagi 2 lalu dimasukkan rekursi lagi" + 0
		{
			return convert(x/2) + "0";
		}
		else 
		{
			return convert(x/2) + "1"; //ganjil gk ush dikurang 1 karena kalo misalkan 73/2 jadi 36.5, int bakal langsung baca otomatis 36
		}
	}
}
int main()
{
	scanf("%d", &x);
	string s = convert(x); //di C, kita harus bikin string baru dulu untuk memasukkan rekursi, biar .c_str gk error
	printf("%s", s.c_str());
}
