#include <iostream>

int main() {
    int i = 10; // Khởi tạo giá trị ban đầu của i

    while (i > 0) { // Tiếp tục lặp khi i > 0
        int j = i;  // Gán j bằng giá trị của i
        while (j <= 10) { // Vòng lặp phụ, có thể điều chỉnh logic nếu cần
            std::cout << j << " "; // In giá trị j
            j++;
        }
        std::cout << std::endl; // Xuống dòng
        i--; // Giảm i sau mỗi vòng lặp chính
    }

    return 0;
}