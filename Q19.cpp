#include <iostream>
#include <math.h>
using namespace std;
int main() {
int start, end;
cout << "Enter range (start end): ";
cin >> start >> end;

for(int n = start; n <= end; n++){
    if(n <= 1) //skip 0 and 1
    continue;
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
        prime = false;
        break;
    }
}
if(prime) cout << n << " ";
}
cout << endl;
return 0;
}