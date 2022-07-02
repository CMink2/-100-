#include<iostream>
using namespace std;
int main() {
	int board[19][19] = { 0 };
	int n;
	int x, y;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> x >> y;
		board[x - 1][y - 1] = 1;
	}
	for (int i = 0;i < 19;i++) {
		for (int k = 0;k < 19;k++) {
			cout << board[i][k] << " ";
		}
		cout << "\n";
	}
	return 0;
}