#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <=8; i++)  {
		for (int j = 1; j <=4; j++) {
				cout << (( i + j) % 2 == 0 ? " # * " : "# *");
		}
		cout << endl;
	}
	return 0;
}
