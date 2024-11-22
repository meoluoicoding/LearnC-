#include <iostream>
#include <vector>
using namespace std;

// Cấu trúc để lưu trữ thông tin khách hàng
struct Customer {
    string name;    // Tên khách hàng
    string email;   // Email khách hàng
    string phone;   // Số điện thoại khách hàng
    int age;        // Tuổi khách hàng
};

int main() {
    // Tạo một vector chứa 4 khách hàng
    vector<Customer> customers = {
        {"Nguyen Anh", "nguyen.anh@email.com", "0123456789", 25},
        {"Tran Minh", "tran.minh@email.com", "0987654321", 30},
        {"Le Bao", "le.bao@email.com", "0169876543", 28},
        {"Phan Mai", "phan.mai@email.com", "0156789345", 35}
    };

    // Sử dụng vòng lặp để in thông tin của 4 khách hàng ra console
    for (int i = 0; i < customers.size(); i++) {
        cout << "Customer " << (i + 1) << " Info:" << endl;
        cout << "Name: " << customers[i].name << endl;
        cout << "Email: " << customers[i].email << endl;
        cout << "Phone: " << customers[i].phone << endl;
        cout << "Age: " << customers[i].age << endl;
        cout << "-----------------------------" << endl;  // Ngăn cách giữa các khách hàng
    }

    return 0;
}
