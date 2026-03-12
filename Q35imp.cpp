#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    // Input first matrix
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Compute sum of matrices
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display sum
    cout << "Sum of the two matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}