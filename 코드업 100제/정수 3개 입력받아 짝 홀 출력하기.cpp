#include<iostream>
using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	for (int i = 0;i < 3;i++)
		if ((arr[i] % 2) == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;

	return 0;
}