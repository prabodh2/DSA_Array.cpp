//inserting at begining
#include <iostream>
using namespace std;

void insertBeginning(int* array, int element, int &n) {
    for (int i = n-1; i >= 0; i--) {
        array[i+1] = array[i];
    }
    array[0] = element;
    n++;
}
void displayArr(int *array, int n) {
    cout << "Array : [ ";
    for ( int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << array[i] << " ]" << endl;
        } else {
            cout << array[i] << ", " ;
        }
    }
}
void InsertAtBeginning() {
    int numOfEleInArr; 
    cout << "Enter length of array: ";
    cin >> numOfEleInArr;
    int arr[10] = {0}; 
    for (int i = 0; i < numOfEleInArr; i++) {
        cin >> arr[i];
    }
    cout << "current ";
    displayArr(arr, numOfEleInArr);
    int newEle = 0;
    cout << "Enter the element to append: ";
    cin >> newEle;
    insertBeginning(arr,newEle, numOfEleInArr);
    cout << "New ";
    displayArr(arr, numOfEleInArr);
}
int main() {
    InsertAtBeginning();
    return 0;
}
