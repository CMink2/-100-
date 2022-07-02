#include<iostream>
using namespace std;

int main() {
	long long int a, b, c;
	double average;
	cin >> a >> b >> c;
	average = (double)(a + b + c) / 3.0;
	cout << a + b + c << "\n";
	cout << fixed;
	cout.precision(1);
	cout << average;

	return 0;
}