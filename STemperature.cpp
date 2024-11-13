#include <iostream>

using namespace std;

int main(){
	
	float temp;
    cout << "What is the Temperature today? [<32, 32-50, >50] | ";
	cin >> temp;
	if (temp <= 32 ){
		cout <<"Bring heavy jacket";
	}
	else if(temp == 32 ){
		cout <<"Bring Light jacket";
	}
	else if (temp > 50){
		cout << "Bring any Jacket you like ";
	}
	else {
		cout << "Bring Light Jacket";
	}
	
    return 0;	
}
