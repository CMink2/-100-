#include<iostream>
using namespace std;

int main() {
	int board[101][101] = { 0, };
	int h, w, n;
	int l, d, x, y;
	cin >> h >> w>> n;
	for (int i = 0;i < n;i++) {
		cin >> l >> d >> x >> y;
		if (d == 0) {
			//���� = y���� ������Ű���.
			for (int k = y;k < y + l;k++)
				board[x][k] = 1;
		}
		else if(d==1) {
			//���� = x���� ������Ű�� ��.
			for (int k = x;k < x + l;k++)
				board[k][y] = 1;
		}
	}
	
	for (int i = 1;i <= h;i++) {
		for (int k = 1;k <= w;k++)
			cout << board[i][k] << " ";
		cout << "\n";
	}
	return 0;
}