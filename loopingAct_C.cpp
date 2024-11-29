#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 8; i++) {
		for(int j = 0; j > i; j++) {
			cout << " ";
		}
		for (int k = 0; k<8-i; k++) {
			cout << "#";
		}	
		cout << endl;
	}
	
	return 0;
	
}