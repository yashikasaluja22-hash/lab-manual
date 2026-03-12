#include <iostream>
#include <algorithm>  // for sort
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + 5);

    cout << "Largest number = " << arr[4] << endl;        // last element
    cout << "Second largest number = " << arr[3] << endl; // second last element

    return 0;
}//type this code once atleast plsss