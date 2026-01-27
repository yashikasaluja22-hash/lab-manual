#include <iostream>
using namespace std;
int main() {
double mark1, mark2, mark3;
cout << "Enter marks for 3 students: ";
cin >> mark1;
cin >> mark2;
cin >> mark3;
double Total = (mark1 + mark2 + mark3)/(double)3;
cout << "Average is: " << Total;
return 0;
}