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
    cin >> salary1;
    double bonus = 12/(double)100;//bonus of 12%
    salary1 += (salary1 * bonus);
    salary[i] = salary1;
    bonus1[i] = (salary1 * bonus);
}
cout << "Display of bonus and net salary of each\n";
for(int x : bonus1){
    cout << x << "\n";
};
for(int x : salary){
    cout << x << "\n";
};


return 0;
}