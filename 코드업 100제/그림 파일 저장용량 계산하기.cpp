#include<iostream>
using namespace std;

int main() {
	int w, h, b;
	double mb;
	cin >> w >> h >> b;
	mb = ((double)w * (double)h * (double)b) / (double)(8 * 1024 * 1024);
	cout << fixed;
	cout.precision(2);
	cout << mb << " MB";
	return 0;
}