#include <iostream>
#include <algorithm>
using namespace std;

void displayArr(int* arr, int n) {
    cout << "Array : [ ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr[i] << " ]" << endl;
        } else {
            cout << arr[i] << ", ";
        }
    }
}
int searchElement(int* arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
void implementSearchInArray() {
    int numOfEleInArr;
    cout << "Enter the length of the array: ";
    cin >> numOfEleInArr;
    int arr[100];
    fill_n(arr, 100, -1);
    for (int i = 0; i < numOfEleInArr; i++) {
        cin >> arr[i];
    }
    cout << "Current ";
    displayArr(arr, numOfEleInArr);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int index = searchElement(arr, numOfEleInArr, target);
    if (index != -1) {
        cout << "Element found at index " << index << "." << endl;
    } else {
        cout << "Element not found in the array." << endl;
        cout << "Enter another element : ";
    }
}
int main() {
    implementSearchInArray();
    return 0;
}
