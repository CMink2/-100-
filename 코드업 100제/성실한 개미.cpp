#include<iostream>
using namespace std;
//미로 저장공간. 0,0은 사용하지 않는다.
int map[11][11] = { 0, };

//이동경로 함수.
void trace(int x, int y);
int main() {
	
	for (int i = 1;i < 11;i++)
		for (int k = 1;k < 11;k++)
			cin >> map[i][k];
	//개미의 좌표. x,y 2,2에서 시작.
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
	//먹이에 도달하면 함수를 반환해 종료한다.
	if ((x < 11 && y < 11)&&(map[x][y]!=1)) {
		if (map[x][y] == 2) {
			map[x][y] = 9;
			return;
		}

		//현재 좌표를 이동했다고 침.
		map[x][y] = 9;

		if (map[x][y + 1] == 1 || y + 1 > 10)//오른쪽이 벽이라면.
		{
			x += 1;	//아래로 이동.
		}
		else {
			y += 1;	//오른쪽으로 이동.
		}
		//함수를 재귀 호출.
		trace(x, y);
	}
}