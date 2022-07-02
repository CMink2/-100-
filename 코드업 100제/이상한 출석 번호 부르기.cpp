#include<iostream>
using namespace std;

int main() {
	int students[24] = { 0, };
	int n, rand;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> rand;
		students[rand]++;
	}
	for (int i = 1; i < 24;i++)
		cout << students[i] << " ";

	return 0;
}