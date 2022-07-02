#include<iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	int i = 97;
	while (i <= (int)a)
	{
		cout << (char)i << " ";
		i++;
	}
	return 0;
}