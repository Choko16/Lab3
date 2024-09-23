#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter the value for x: ";
    cin >> x;
    cout << "Enter the value for y: ";
    cin >> y;
    double* pX = &x;
    double* pY = &y;
    double sum = *pX + *pY;
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
    cout << "Sum : " << sum << "\n";

    return 0;
}
