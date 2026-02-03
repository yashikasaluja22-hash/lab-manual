#include <iostream>
#include <string>
using namespace std;
int main() {
string item;
cout << "Enter item: ";
getline(cin, item);

int quantity;
double price;
cout << "Enter quantity of item: ";
cin >> quantity;

cout << "Enter unit price of one item: ";
cin >> price;

double amount = 0;
cout << "Amount after 20% discount is: \n";
amount += (price * quantity) * ((double)20/100);
cout << '$' << amount;
return 0;
}