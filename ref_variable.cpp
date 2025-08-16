#include <iostream>
using namespace std;

// Function that increases a number by 1 using reference
void increase(int &num) {
    num++;
}

int main() {
    int a = 5;

    // reference variable (b is just another name for a)
    int &b = a;

    cout << "a = " << a << endl;
    a++;
    cout << "a after increment = " << a << endl;
    cout << "b (reference to a) = " << b << endl;

    int n = 10;
    cout << "Before calling function: n = " << n << endl;

    increase(n); // function call with reference

    cout << "After calling function: n = " << n << endl;

    return 0;
}
