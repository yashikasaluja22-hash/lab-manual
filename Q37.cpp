#include <iostream>
#include <cctype>  // for isalnum
using namespace std;
int main() {
string username;
bool valid = true;
cout << "Enter username: ";
cin >> username;
for(char ch : username){
    if(!isalnum(ch)) // to check is alphanumeric
    valid = false;
    break;
}
 if(valid)
        cout << "Username is valid." << endl;
    else
        cout << "Username is invalid. It must not contain spaces or special characters." << endl;

return 0;
}
/*How It Works

Input the username as a string.
Use a range-based for loop to check each character.
isalnum(ch) → returns true if ch is letter or digit.
If any character is not alphanumeric, mark valid = false and stop checking.
Print result.*/

/*break; → exits only the loop, and the program continues to check if(valid) afterwards.

return 0; → stops the entire main() function immediately.
Nothing after the loop will run.
This is okay if your only task is to check the username and exit if invalid.*/