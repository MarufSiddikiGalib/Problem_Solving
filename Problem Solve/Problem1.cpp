#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols];

    // Input the elements of matrix
    cout << "Enter the elements of the 3x3 matrix:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and print the sum of each row
    cout << "Sum of each row:" <<endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    // Calculate and print the sum of each col.
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum <<endl;
    }

    return 0;
}
