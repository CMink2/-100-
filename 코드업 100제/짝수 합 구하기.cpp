#include<iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	int sum = 0;
	for (int k = 0;k <= i;k++)
	{
		if ((k % 2) == 0)
			sum += k;
	}
	cout << sum;
	return 0;
}