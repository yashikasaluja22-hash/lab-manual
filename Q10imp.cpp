#include <iostream>
using namespace std;
int main() {
int year;
cin >> year;
if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    cout << "it is leap year\n";
}
else{
    cout << "no, not leap year.\n";
}

return 0;
}