#include <iostream>
using namespace std;
int main() {
int marks[5] = {0};
int total = 0;
double percentage = 0;
cout << "Enter marks\n";
for(int i = 0; i < 5; i++){
    cout << (i+1) << " ";
    cin>>marks[i];
    total += marks[i]; // and notice this loop too
}
for(int x : marks){
    cout << "subject " << x << '\n';
}
cout << "total is: " << total << '\n';
percentage = (total/(double)500)*100; //notice this line
cout << percentage << "\n";

return 0;
}