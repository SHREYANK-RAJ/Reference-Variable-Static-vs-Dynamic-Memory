#include <iostream>
using namespace std;

// function to calculate sum of array elements
int getSum(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];   // keep adding each element
    }
    return total;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // making array dynamically
    int *arr = new int[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // calling function
    int ans = getSum(arr, n);

    cout << "Total sum = " << ans << endl;

    // free memory
    delete[] arr;

    return 0;
}
