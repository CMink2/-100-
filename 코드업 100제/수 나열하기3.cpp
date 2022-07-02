#include<iostream>
using namespace std;

int main() {
	long long int a, m, d;
	long long int n;
	cin >> a >> m >> d >> n;
	long long int result = a;
	for (int i = 1;i < n;i++)
		result = result * m + d;
	cout << result;
	
	return 0;
}