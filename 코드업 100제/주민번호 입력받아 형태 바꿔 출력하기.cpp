#include<iostream>
using namespace std;

int main() {
	int first, second;
	cin >> first;
	cin.ignore(256, '-');
	cin >> second;
	cout.width(6);
	cout.fill('0');
	cout << first;
	cout.width(7);
	cout.fill('0');
	cout << second;
	return 0;
}