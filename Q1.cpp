#include <iostream>
using namespace std;
int main() {
double mark1, mark2, mark3;
cout << "Enter marks for student 1: ";
cin >> mark1;
cout << "Enter marks for student 2: ";
cin >> mark2;
cout << "Enter marks for student 3: ";
cin >> mark3;
double Total = (mark1 + mark2 + mark3)/(double)3;
cout << "Average is: " << Total;
return 0;
}