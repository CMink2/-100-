#include<iostream>
using namespace std;

int main() {
	int n, cnt, item;
	cnt = 0;

	cin >> n;
input:
	cin >> item;
	cout << item << endl;
	cnt++;
	if(cnt!=n)
		goto input;
	return 0;
}