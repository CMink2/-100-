#include<iostream>
using namespace std;

int main() {
	int i;
	int sum = 0;
	int cnt = 1;
	cin >> i;
	while (sum < i)
	{
		sum += cnt;
		cnt++;
	}
	cout << --cnt;
	return 0;
}