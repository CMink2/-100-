#include<iostream>
using namespace std;
void sorting(int array[10000], int n);
int main() {
	int n;
	int says[10000];
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> says[i];
	sorting(says, n);
	cout << says[0] << endl;
	return 0;
}

void sorting(int array[10000], int n) {
	int temp, k;
	for (int i = 1;i < n;i++)
	{
		temp = array[i];
		k = i - 1;
		while (k >= 0 && array[k] > temp)
		{
			array[k + 1] = array[k];
			k--;
		}
		array[k + 1] = temp;
	}
}