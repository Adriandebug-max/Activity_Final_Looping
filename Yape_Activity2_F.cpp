#include <iostream>

using namespace std;

int main() {
	
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j < i; j++) {
			cout << "" << "#";
		}
		cout << " ";
		for (int j = i + 1; j <= 9; j++) {
			cout << "" << "#";
		}
		cout << endl;
	}
	return 0;
	
}