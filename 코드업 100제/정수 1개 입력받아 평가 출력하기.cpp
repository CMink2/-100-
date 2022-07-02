#include<iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	if (i >= 90)
		cout << 'A' << endl;
	else if (i >= 70)
		cout << 'B' << endl;
	else if (i >= 40)
		cout << 'C' << endl;
	else if (i >= 0)
		cout << "D" << endl;
	return 0;
}