#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Enter the size of the square matrix up to 100: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid matrix size. Please enter a size between 1 and 100." << endl;
        return 1; // Exit with an error
    }

    int matrix[100][100];

    // Input the elements of the matrix
    cout << "Enter the elements of the square matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and print the sum of the main diagonal
    int mainDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        mainDiagonalSum += matrix[i][i];
    }
    cout << "Sum of the main diagonal: " << mainDiagonalSum << endl;

    // Calculate and print the sum of the anti-diagonal
    int antiDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        antiDiagonalSum += matrix[i][n - i - 1];
    }
    cout << "Sum of the anti-diagonal: " << antiDiagonalSum << endl;

    return 0;
}
