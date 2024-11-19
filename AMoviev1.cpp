#include <iostream>

using namespace std;

int main()
{
	int age;
	bool parent;
	double money;
	string toPrintShow, toPrintMoney;
	cout <<"Enter Age| ";
	cin >> age;
	if (age<13){
		cout <<"With Parent? ";
		cin >> parent;
		if (parent) toPrintShow = "PG & G Show";
		else
			toPrintShow = "G show";
	}
	else if (age<16) {
		cout <<"with Parent";
		cin >> parent;
		if (parent) toPrintShow = "R,PG,& G Show";
	    else
            toPrintShow	= "PG & G Show" ;
	}
	else 
		toPrintShow = "R,PG & G show";
	cout << "Enter money | ";
	cin >> money;
	if(money<7.5) toPrintMoney = "Not Enough Money";
	else if(money<10.5) toPrintMoney = "Can go  to matinee show ";
	else 
		toPrintMoney = "Can go to  evening & ,atinee show";
	return 0;
}
