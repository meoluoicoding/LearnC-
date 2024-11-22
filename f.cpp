#include <iostream>
#include <algorithm>  // Cần thư viện này để sử dụng sort
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mảng ban đầu: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sắp xếp mảng theo thứ tự giảm dần bằng STL sort
    sort(arr, arr + n, greater<int>());

    cout << "Mảng sau khi sắp xếp (từ lớn tới nhỏ): " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
