#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main() {
int a, b;
cout << "Enter 2 numbers to swap: ";
cin >> a >> b;
cout << "Before swapping: a = " << a << " and b = " << b << '\n';
swap(a, b);
cout << "After swapping: a = " << a << " and b = " << b << '\n';
return 0;
}
void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}