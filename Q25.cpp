#include <iostream>
#include <string.h>
using namespace std;
int main() {
string password;
bool isUpper = false;
bool isLower = false;
bool isDigit = false;
bool isSpecial = false;

cout << "Enter password: ";
cin >> password;

for(int i = 0; i < password.length(); i++){
    char ch = password[i];
    if(ch >= 'A' && ch <= 'Z'){
        isUpper = true;
    }
    if(ch >= 'a' && ch <= 'z'){
        isLower = true;
    }
    if(ch >= '0' && ch <= '9'){
        isDigit = true;
    }
    if(ch == '@' || ch == '#' || ch == '&' || ch == '%' || ch == '*' || ch == '!'|| ch == '$'){
        isSpecial = true;
    }
}

if(isUpper && isDigit && isSpecial && isLower){
    cout << "ur password is valid and STRONG\n";
}
else{
    cout << "Password is INVALID. It must contain:\n"
             << "- At least one uppercase letter\n"
             << "- At least one lowercase letter\n"
             << "- At least one digit\n"
             << "- At least one special character (@ # $ % ! & *)\n";
}
return 0;
}