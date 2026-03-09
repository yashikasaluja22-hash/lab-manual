#include <iostream>
using namespace std;
int main(){
int n, num , largest;
cout << "Enter how many numbers: ";
cin >> n;
cout << "Enter number 1: ";
cin >> largest;
for(int i = 2; i <= n; i++){
    cout << "Enter no. " << i << '\n';
    cin >> num;
    if(num > largest) largest = num;
}
cout << "Largest is " << largest;
return 0;
}