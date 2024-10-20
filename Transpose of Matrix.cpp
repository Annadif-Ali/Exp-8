#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix is:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output Example:
Enter the number of rows: 2
Enter the number of columns: 3
Enter the elements of the matrix:
1 2 3
4 5 6
Transpose of the matrix is:
1 4 
2 5 
3 6
*/
