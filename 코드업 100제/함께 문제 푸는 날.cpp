#include<iostream>
using namespace std;

int main() {
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	int day = 1;
	while ((day%n[0])!=0|| (day % n[1]) != 0|| (day % n[2]) != 0){
		day++;
	}
	cout << day;
	return 0;
}