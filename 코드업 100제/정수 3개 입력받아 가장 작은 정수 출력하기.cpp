#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (c < (a < b ? a : b) ? c : (a < b ? a : b));
	return 0;
}