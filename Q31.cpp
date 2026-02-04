#include <iostream>
using namespace std;
int main() {
int arr[5] = {0};
int divisible = 0;
for(int i = 0; i < 5; i++){
    cout << "Enter element #" << i + 1 << " ";
    cin >> arr[i];
    if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
        divisible++;
    }
}
cout << divisible << " numbers are both divisible by both 3 and 5";
return 0;
}