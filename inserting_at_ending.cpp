//inserting at ending 
#include <iostream>
#include <algorithm>
using namespace std;

void insertAtEnd(int* arr, int ele, int& n) {
    arr[n] = ele;
    n++;
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
int getNumberOfElements(int *arr) {
    int i = 0;
    while (arr[i] != -1){
        i++;
    }
    return i;
}

void implementInsertAtEnd() {
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
    int newEle = 0;
    cout << "Enter the element to append: ";
    cin >> newEle;
    insertAtEnd(arr, newEle, numOfEleInArr);
    cout << "New ";
    displayArr(arr, numOfEleInArr);
}

int main() {
    implementInsertAtEnd();
    return 0;
}

