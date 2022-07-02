#include<iostream>
using namespace std;

int main() {
	int i;
input:
	cin >> i;
	if (i != 0) {
		cout << i << endl;
		goto input;
	}
	return 0;
}