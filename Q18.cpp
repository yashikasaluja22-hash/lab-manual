#include <iostream>
using namespace std;
int main() {
int id, reverse = 0, digit, original;
cout  << "Enter a id: ";
cin >> id;
original = id;
while(id != 0){
    digit = id % 10;
    reverse = reverse * 10 + digit;
    id = id / 10;
}
if(original == reverse)
        cout << "ID is Palindrome";
    else
        cout << "ID is not Palindrome";
return 0;
}