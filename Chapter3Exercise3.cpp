#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double rent, phones, internet, utilities, cable;

	cout << "Enter your monthly rent or mortgage payment: $";
	cin >> rent;

	cout << "Enter your monthly phone bill: $";
	cin >> phones;

	cout << "Enter your monthly internet bill: $";
	cin >> internet;

	cout << "Enter your monthly utilities bill: $";
	cin >> utilities;

	cout << "Enter your monthly cable bill: $";
	cin >> cable;

	double monthlyTotal = rent + phones + internet + utilities + cable;
	double annualTotal = monthlyTotal * 12;

	cout << fixed << setprecision(2);
	cout << "Total Monthly Cost: $" << monthlyTotal << endl;
	cout << "Total Annual Cost: $" << annualTotal << endl;

	return 0;
}