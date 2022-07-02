#include<iostream>
using namespace std;

int main() {
	int hours, min;
	cin >> hours;
	cin.ignore(256, ':');
	cin >> min;
	cout << hours << ":" << min;
	return 0;
}