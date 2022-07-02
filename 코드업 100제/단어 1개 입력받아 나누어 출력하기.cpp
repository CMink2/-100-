#include<iostream>
using namespace std;

int main() {
	char word[21];
	cin >> word;
	int i = 0;
	while (word[i] != NULL) {
		cout << "\'" << word[i] << "\'" << endl;
		i++;
	}
	return 0;
}