#include <iostream>
using namespace std;

// Hàm sắp xếp nổi bọt (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Đổi chỗ nếu phần tử hiện tại lớn hơn phần tử tiếp theo
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Hàm in mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mảng ban đầu: " << endl;
    printArray(arr, n);

    // Sắp xếp mảng
    bubbleSort(arr, n);

    cout << "Mảng sau khi sắp xếp: " << endl;
    printArray(arr, n);

    return 0;
}
