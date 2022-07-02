#include<iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	for (int k = 10000;k > 0;k /= 10) {
		int d = i - (i % k);
		cout << "[" << d << "]" << endl;
		i -= d;
	}
	return 0;
}