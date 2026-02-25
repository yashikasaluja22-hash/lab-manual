#include <iostream>
using namespace std;
int main() {
int arr[5] = {0};
int max, max2;
for(int i = 0; i < 5; i++){
    cout << "Enter element #" << i + 1 << " ";
    cin >> arr[i];
}
max == arr[0];
max2 == arr[1];
for(int i = 0; i < 5; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
return 0;
}