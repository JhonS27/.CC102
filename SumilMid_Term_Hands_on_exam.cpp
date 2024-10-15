#include <iostream>

using namespace std;

int main(){
	
	int sugar,milk,coffe,sardines,rice;
	float sugar_num, rice_num, sardines_num, coffe_num, milk_num;
	float php, pound, total, usd, poundTotal;
	
	cout << "Enter the sugarPriceUSD\t\t| ";
	cin >> sugar;
	cout << "Enter the ricePricePound\t| ";
	cin >> rice;
	cout << "Enter the sardinesPricePound\t| ";
	cin >> sardines;
	cout << "Enter the coffePriceUSD\t\t| ";
	cin >> coffe;
	cout << "Enter the milkPriceUSD\t\t| ";
	cin >> milk;
	
    cout << "**************************************************************"<< endl;	
	cout << "Enter the number of Sugar\t| ";
	cin >> sugar_num;
	cout << "Enter the number of Rice\t| ";
	cin >> rice_num;
	cout << "Enter the number of Sardines\t| ";
	cin >> sardines_num;
	cout << "Enter the number of Coffe\t| ";
	cin >> coffe_num;
	cout << "Enter the number of Milk\t| ";
	cin >> milk_num;
	
	cout << "**************************************************************"<< endl;
	cout << "USD to PHP conversion rate (1USD)\t| ";
    cin >> 	php;
	cout << "Pound to PHP conversion rate (1pound)\t| ";
    cin >> 	pound;
	
	cout << "**************************************************************"<< endl;
	usd = ((sugar * sugar_num) + (coffe * coffe_num) + (milk * milk_num)) * php;
	poundTotal = ((rice * rice_num) + (sardines * sardines_num)) * pound;
	total = ((usd + poundTotal));
	cout << "The total cost\t | "<< total;
	
	return 0;
}
