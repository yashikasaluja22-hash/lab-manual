/*Perfect Number
Definition

A perfect number is a number whose sum of its proper divisors (excluding itself) equals the number.

Example:
6 → divisors: 1, 2, 3
1 + 2 + 3 = 6 → Perfect Number*/
#include <iostream>
using namespace std;
int main() {
int n, sum = 0;
cout  << "Enter a number: ";
cin >> n;
for(int i = 1; i <= n/2; i++){
    if(n % i == 0){
        sum += i;
    }
}
if(sum == n) cout << n << " is a Perfect Number";
else cout << n << " is not a Perfect Number";

return 0;
}