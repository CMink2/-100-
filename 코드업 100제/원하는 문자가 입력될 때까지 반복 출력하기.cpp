#include<iostream>
using namespace std;

int main() {
	char a;
	while (1) {
		cin >> a;
		cout << a << "\n";
		if (a == 'q')
			break;
	}
	return 0;
}