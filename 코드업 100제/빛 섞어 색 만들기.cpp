#include<iostream>
using namespace std;

int main() {
	int r, g, b;
	cin >> r >> g >> b;
	int cnt = 0;
	for (int i = 0;i < r;i++)
		for (int k = 0;k < g;k++)
			for (int j = 0;j < b;j++)
			{
				cout << i << " " << k << " " << j << "\n";
				cnt++;
			}
	cout << cnt;
	return 0;
}