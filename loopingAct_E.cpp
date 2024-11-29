#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <=8; i++){
		for (int j = 8;j > 1; j--){
			cout << " ";
		}
		for (int k = 1; k <=i; k++)
		{
			cout <<k;
		}	
		 cout << endl;
	}
	
	return 0;
	
}