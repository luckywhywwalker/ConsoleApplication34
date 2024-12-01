#include <iostream>
using namespace std;
int* removeNonNegative(int* arr, int& size) {
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }
    int* newArr = new int[negativeCount];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            newArr[index++] = arr[i];
        }
    }
    size = negativeCount;
    return newArr;
}
int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int* newArr = removeNonNegative(arr, size);
    cout << "New array with only negative numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] newArr;
    return 0;
}
