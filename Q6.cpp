#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter no. of employees: ";
cin >>n;
double salary1;
double salary[n] = {0};
double bonus1[n] = {0};
cout<<"Enter salary for each employee: \n";
for(int i = 0; i < n; i++){
    cout << (i + 1) << " ";
    cin >> salary[i];
    double bonus = salary[i] * (12/(double)100);//bonus of 12%
    salary[i] += bonus;
    bonus1[i] = bonus;
}
cout << "Display of bonus and net salary of each\n";
for(double x : bonus1){
    cout << x << "\n";
};
for(double x : salary){
    cout << x << "\n";
};


return 0;
}