#include <iostream>
using namespace std;
int main() {
int salary[10] = {0};
int total = 0;
double average = 0;
cout << "Enter salary\n";
for(int i = 0; i < 10; i++){
    cout << (i+1) << " ";
    cin>>salary[i];
    total += salary[i]; // and notice this loop too
}
for(int x : salary){
    cout << "salary " << x << '\n';
}
cout << "total is: " << total << '\n';
average = total/(double)10; //notice this line
cout << average << "\n";

return 0;
}