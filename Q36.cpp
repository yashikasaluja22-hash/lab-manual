#include <iostream>
using namespace std;
int main() {
int m, n, p, q;
cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

if(n != p){
cout << "Matrix multiplication not possible. Columns of first != rows of second.\n";
return 0; 
// why 'return 0' here:
//If the condition is true, the function stops executing right there.
//The rest of the function after the if is skipped.
}

int matrix1[m][n], matrix2[p][q], product[m][q];


 // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix1[i][j];

//input for second matrix
 cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            cin >> matrix2[i][j];

    // Initialize product matrix to 0
    for(int i = 0; i < m; i++)
        for(int j = 0; j < q; j++)
            product[i][j] = 0;


    // Multiply matrices
for(int i = 0; i < m; i++){
    for(int j = 0; j < q; j++){
        for(int k = 0; k < n; k++){
            product[i][j] += matrix1[m][k] * matrix2[k][q];
        }
    }
}
 // Display product
    cout << "Product of the matrices:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }

    return 0;
}