#include<iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	if (i < 0)
		cout << "minus" << "\n";
	else
		cout << "plus" << "\n";
	if ((i % 2) == 0)
		cout << "even" << "\n";
	else
		cout << "odd" << "\n";
	return 0;
}