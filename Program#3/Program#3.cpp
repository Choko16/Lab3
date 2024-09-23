#include <iostream>
using namespace std;

typedef int* VEC;
typedef VEC* MATRIX;

int main() {
    int a = 5;
    VEC v = &a;
    MATRIX m = &v;
    cout << "Value of a using v: " << *v << endl;
    cout << "Value of a using m: " << **m << endl;

    return 0;
}
