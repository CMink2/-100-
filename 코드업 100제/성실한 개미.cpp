#include<iostream>
using namespace std;
//�̷� �������. 0,0�� ������� �ʴ´�.
int map[11][11] = { 0, };

//�̵���� �Լ�.
void trace(int x, int y);
int main() {
	
	for (int i = 1;i < 11;i++)
		for (int k = 1;k < 11;k++)
			cin >> map[i][k];
	//������ ��ǥ. x,y 2,2���� ����.
	int x, y;
	x = 2;
	y = 2;
	trace(x,y);

	for (int i = 1;i < 11;i++)
	{
		for (int k = 1;k < 11;k++)
			cout << map[i][k] << " ";
		cout << "\n";
	}
	return 0;
}

void trace(int x, int y) {
	//���̿� �����ϸ� �Լ��� ��ȯ�� �����Ѵ�.
	if ((x < 11 && y < 11)&&(map[x][y]!=1)) {
		if (map[x][y] == 2) {
			map[x][y] = 9;
			return;
		}

		//���� ��ǥ�� �̵��ߴٰ� ħ.
		map[x][y] = 9;

		if (map[x][y + 1] == 1 || y + 1 > 10)//�������� ���̶��.
		{
			x += 1;	//�Ʒ��� �̵�.
		}
		else {
			y += 1;	//���������� �̵�.
		}
		//�Լ��� ��� ȣ��.
		trace(x, y);
	}
}