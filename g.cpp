#include <iostream>
#include <vector>
#include <algorithm> // Để sử dụng std::sort và std::binary_search

// Hàm tìm kiếm tuần tự (O(n))
bool linearSearch(const std::vector<std::string>& toys, const std::string& target) {
    for (const auto& toy : toys) { // Duyệt qua từng món đồ
        if (toy == target) {
            return true; // Tìm thấy món đồ
        }
    }
    return false; // Không tìm thấy
}

// Hàm tìm kiếm nhị phân (O(log n))
// Lưu ý: Danh sách phải được sắp xếp trước khi sử dụng tìm kiếm nhị phân
bool binarySearch(std::vector<std::string>& toys, const std::string& target) {
    std::sort(toys.begin(), toys.end()); // Sắp xếp danh sách trước
    return std::binary_search(toys.begin(), toys.end(), target); // Tìm kiếm nhị phân
}

int main() {
    // Danh sách các món đồ chơi
    std::vector<std::string> toys = {"gấu bông", "ô tô", "búp bê", "lego", "khối rubik"};

    std::string target = "búp bê"; // Món đồ cần tìm

    // Tìm kiếm tuần tự
    std::cout << "Tìm kiếm tuần tự: ";
    if (linearSearch(toys, target)) {
        std::cout << "Đã tìm thấy '" << target << "' bằng tìm kiếm tuần tự." << std::endl;
    } else {
        std::cout << "Không tìm thấy '" << target << "' bằng tìm kiếm tuần tự." << std::endl;
    }

    // Tìm kiếm nhị phân
    std::cout << "Tìm kiếm nhị phân: ";
    if (binarySearch(toys, target)) {
        std::cout << "Đã tìm thấy '" << target << "' bằng tìm kiếm nhị phân." << std::endl;
    } else {
        std::cout << "Không tìm thấy '" << target << "' bằng tìm kiếm nhị phân." << std::endl;
    }

    return 0;
}