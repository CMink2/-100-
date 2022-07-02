#include<iostream>
using namespace std;

int main() {
	int bd[19][19] = { 0, };
	for(int i = 0;i < 19;i++)
		for (int k = 0;k < 19;k++)
			cin >> bd[i][k];
		
	int n, x, y;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> x >> y;
		for (int k = 0;k < 19;k++) {
			if (bd[x - 1][k] == 1)
				bd[x - 1][k] = 0;
			else if (bd[x - 1][k] == 0)
				bd[x - 1][k] = 1;
			if (bd[k][y-1] == 1)
				bd[k][y-1] = 0;
			else if (bd[k][y-1] == 0)
				bd[k][y-1] = 1;
		}
	}
	for (int i = 0;i < 19;i++)
	{
		for (int k = 0;k < 19;k++)
			cout << bd[i][k] << " ";
		cout << "\n";
	}
	return 0;
}