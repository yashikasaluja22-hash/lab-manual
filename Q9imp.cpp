#include <iostream>
using namespace std;
int main() {
char ch;
cout << "Enter a character: ";
cin >> ch;

if(ch >= '0' && ch <= '9') cout << "It's a number.\n";
else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' ||ch == 'U') cout << "It's a Vowel\n";
else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') cout << "It's a consonant\n";
else cout << "Invalid character\n";
return 0;
}