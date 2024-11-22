#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;  // Khai báo một vector chứa các số nguyên
    nums.push_back(5);  // Thêm phần tử 5 vào cuối vector
    nums.push_back(10); // Thêm phần tử 10 vào cuối vector
    nums.push_back(15); // Thêm phần tử 15 vào cuối vector
    nums.push_back(20); 
    nums.push_back(25);


    // In ra tất cả các phần tử trong vector
    for (int i = 0; i < nums.size(); i++) { //num.size là một hàm của vector để trả các dữ liệu ở trong vector 
        cout << nums[i] << " ";  // Truy cập các phần tử thông qua chỉ số
    }
   
    return 0;
}
