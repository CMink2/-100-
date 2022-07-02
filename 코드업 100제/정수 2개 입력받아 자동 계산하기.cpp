#include<iostream>
using namespace std;

int main() {
	long long int a, b;
	double div;
	cin >> a >> b;
	div = (double)a / (double)b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed;
	cout.precision(2);
	cout << div;
	return 0;
}