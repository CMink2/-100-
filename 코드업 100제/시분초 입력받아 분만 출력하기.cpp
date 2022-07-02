#include<iostream>
using namespace std;

int main() {
	int h, m, s;
	cin >> h;
	cin.ignore(256, ':');
	cin >> m;
	cin.ignore(256, ':');
	cin >> s;

	cout << m;
	return 0;
}