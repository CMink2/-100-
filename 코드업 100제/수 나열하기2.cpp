#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, r, n;
	cin >> a >> r >> n;
	cout << fixed;
	cout <<(long long) (a * pow(r, (n - 1)));
	return 0;
}