#include<iostream>
using namespace std;
int main() {
	int n;
	int says[10000];
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> says[i];
	for (int i = n - 1;i >= 0;i--)
		cout << says[i] << " ";
	return 0;
}