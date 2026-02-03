#include <iostream>
using namespace std;
int main() {
char choice;
cout << "Fahrenheit(F) or Celsius(C)\n";
cout << "In which Unit you would like to convert(C/F): ";
cin >> choice;

double temp = 0;

if(choice == 'C'){
    cout << "Enter your temp in Fahrenheit: ";
    cin >> temp;
    cout << "You temeperature is " << temp << choice;
}
else if(choice == 'F'){
    cout << "Enter your temp in Fahrenheit: ";
    cin >> temp;
    temp = (temp - 32) * (5/9);
    cout << "You temeperature is " << temp << choice;
}
else{
    cout << "Invalid Input";
}
return 0;
}