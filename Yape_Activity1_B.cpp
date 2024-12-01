#include <iostream>

using namespace std;

int main()
{
	for (int i = 8; i >= 1; i--) {
		for (int j = 1; j <= 8-i; j++) {
		}
		for (int j= 1; j <= i; j++) {
			cout << "#";
			if ( j < i ) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}