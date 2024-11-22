#include <iostream>
#include <thread> // Thư viện để sử dụng hàm sleep

int main() {
    for (int i = 10; i >= 0; --i) { // Vòng lặp giảm từ 10 tới 0
        std::cout << i << std::endl; // In ra giá trị hiện tại của i
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Tạm dừng 1 giây
    }

    std::cout << "Hoàn thành!" << std::endl;
    return 0;
}
