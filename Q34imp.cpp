#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int transpose[3][3];

    // Input 3x3 matrix
    cout << "Enter elements of 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Compute transpose
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transpose
    cout << "Transpose of the matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}