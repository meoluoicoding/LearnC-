#include <iostream>
#include <vector>
#include <algorithm> // Để sử dụng std::sort và std::binary_search

// Hàm tìm kiếm tuyến tính (O(n))
int linearSearch(const std::vector<std::pair<int, std::string>>& candies, int targetNumber, const std::string& targetColor) {
    for (const auto& candy : candies) { // Duyệt qua từng viên kẹo
        if (candy.first == targetNumber && candy.second == targetColor) {
            return candy.first; // Trả về số thứ tự viên kẹo
        }
    }
    return -1; // Không tìm thấy
}

// Hàm tìm kiếm nhị phân (O(log n))
int binarySearch(std::vector<std::pair<int, std::string>>& candies, int targetNumber, const std::string& targetColor) {
    // Sắp xếp danh sách theo số thứ tự
    std::sort(candies.begin(), candies.end());
    
    int left = 0, right = candies.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (candies[mid].first == targetNumber && candies[mid].second == targetColor) {
            return candies[mid].first; // Trả về số thứ tự viên kẹo
        } else if (candies[mid].first < targetNumber) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Không tìm thấy
}

int main() {
    // Tạo danh sách 5,000 viên kẹo (số thứ tự và màu sắc)
    std::vector<std::pair<int, std::string>> candies;
    for (int i = 1; i <= 5000; ++i) {
        if (i % 10 == 0) {
            candies.emplace_back(i, "yellow"); // Cứ 10 viên thì có 1 viên màu vàng
        } else {
            candies.emplace_back(i, "red"); // Các viên còn lại có màu đỏ
        }
    }

    int targetNumber = 7;         // Số thứ tự của viên kẹo cần tìm
    std::string targetColor = "yellow"; // Màu sắc của viên kẹo cần tìm

    // Tìm kiếm tuyến tính
    std::cout << "Tìm kiếm tuyến tính: ";
    int result = linearSearch(candies, targetNumber, targetColor);
    if (result != -1) {
        std::cout << "Đã tìm thấy viên kẹo màu " << targetColor << " số " << result << " bằng tìm kiếm tuyến tính." << std::endl;
    } else {
        std::cout << "Không tìm thấy viên kẹo màu " << targetColor << " số " << targetNumber << " bằng tìm kiếm tuyến tính." << std::endl;
    }

    // Tìm kiếm nhị phân
    std::cout << "Tìm kiếm nhị phân: ";
    result = binarySearch(candies, targetNumber, targetColor);
    if (result != -1) {
        std::cout << "Đã tìm thấy viên kẹo màu " << targetColor << " số " << result << " bằng tìm kiếm nhị phân." << std::endl;
    } else {
        std::cout << "Không tìm thấy viên kẹo màu " << targetColor << " số " << targetNumber << " bằng tìm kiếm nhị phân." << std::endl;
    }

    return 0;
}