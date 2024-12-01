#include <iostream>

using namespace std;

int main ()
{
	 for (int i = 0; i <= 8; i++) {
        for (int j = 0; j <= (8-i-1) * 3; j++) {
            cout <<" ";
        }
        for (int j = 1; j <= i + 1; j++) {
            cout << " " << j << " ";
        }
        cout << endl;
	 }
			
	return 0;
}