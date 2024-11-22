#include <iostream>

int main() {
    int n = 50; // Khởi tạo biến n với một giá trị, ví dụ: 50.

    for (int i = 0; i <= 1000; i++) {
        for (int j = i; j > n - 1; j++) {
            if (j >= 100) { // Dừng vòng lặp nếu j vượt quá 100
                break; // Thoát khỏi vòng lặp bên trong
            }
            std::cout << "i: " << i << ", j: " << j << std::endl;
        }
    }

    return 0; // Đặt ngoài vòng lặp để chương trình hoàn thành.
}
