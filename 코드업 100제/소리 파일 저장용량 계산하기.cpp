#include<iostream>
using namespace std;

int main() {
	int h, b, c, s;
	double mb;
	cin >> h >> b >> c >> s;
	mb = ((double)h * (double)b * (double)c * (double)s) / (double)(8 * 1024 * 1024);
	cout << fixed;
	cout.precision(1);
	cout << mb << " MB";
	return 0;
}