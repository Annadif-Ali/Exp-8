#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];
    int forwardDiagonalSum = 0, reverseDiagonalSum = 0;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
            if (i == j) {
                forwardDiagonalSum += matrix[i][j];
            }
            if (i + j == n - 1) {
                reverseDiagonalSum += matrix[i][j];
            }
        }
    }

    cout << "Forward Diagonal Sum: " << forwardDiagonalSum << endl;
    cout << "Reverse Diagonal Sum: " << reverseDiagonalSum << endl;

    return 0;
}

/*
Output Example:
Enter the size of the square matrix: 3
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
Forward Diagonal Sum: 15
Reverse Diagonal Sum: 15
*/
