#include <iostream>
#include <algorithm>
using namespace std;

void deletion(int *arr, int pos, int &n) {
    if (pos == -1) { 
        n--;
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}
void displayArr(int *arr, int n) {
    cout << "Array : [ ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr[i] << " ]" << endl;
        } else {
            cout << arr[i] << ", ";
        }
    }
}

int main() {

    int arr[100];
    fill_n(arr, 100, -1);

    int num = 0;
    cout << "Enter the length of the array: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int pos = 0;
    cout << "Enter the last index position of the element : ";
    cin >> pos;

    if (pos < -1 || pos >= num) {
        cout << "Invalid position. Please enter a position between -1 and " << num - 1 << "." << endl;
    } else {
        deletion(arr, pos, num);
        displayArr(arr, num);
    }

    return 0;
}
