#include <iostream>
#include <vector>
using namespace std;

double lagrangeInterpolation(double x, const vector<double>& xValues, const vector<double>& yValues) {
    double result = 0.0;
    for (int i = 0; i < xValues.size(); ++i) {
        double term = yValues[i];
        for (int j = 0; j < xValues.size(); ++j) {
            if (j != i) {
                term = term * (x - xValues[j]) / (xValues[i] - xValues[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    // Given data points
    vector<double> xValues = {2, 3, 17, 24};
    vector<double> yValues = {1, 5, 9, 21};

    // Point at which we want to find y
    double xToFind = 4;

    // Calculate y(4) using Lagrange Interpolation
    double yResult = lagrangeInterpolation(xToFind, xValues, yValues);

    // Print the result
    cout << "y(" << xToFind << ") = " << yResult << endl;

    return 0;
}

