#include <iostream>
using namespace std;
int main() {
int arr[5] = {0};
int sumEven = 0;
int sumOdd = 0;
for(int i = 0; i < 5; i++){
    cout << "Enter element #" << i + 1 ;
    cin >> arr[i];
    if(arr[i] % 2 == 0){
        sumEven += arr[i];
    }
    else{
        sumOdd += arr[i];
    }
}

cout << "Sum of even numbers: " << sumEven << '\n';
cout << "Sum of Odd numbers: " << sumOdd << '\n';

return 0;
}