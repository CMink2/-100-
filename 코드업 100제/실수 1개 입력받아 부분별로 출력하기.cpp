#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin.ignore(256, '.');
	cin >> b;
	cout << a << endl;
	cout << fixed;
	cout.precision(6);
	cout << b;
	return 0;
}