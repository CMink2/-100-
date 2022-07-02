#include<iostream>
using namespace std;

int main() {
	int y, m, d;
	cin >> y;
	cin.ignore(256, '.');
	cin >> m;
	cin.ignore(256, '.');
	cin >> d;

	cout << fixed;
	cout.width(2);
	cout.fill('0');
	cout << d << "-";
	cout << fixed;
	cout.width(2);
	cout.fill('0');
	cout << m << "-";
	cout << fixed;
	cout.width(4);
	cout.fill('0');
	cout << y;
	return 0;
}