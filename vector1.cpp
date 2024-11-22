#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;  // Hash map lưu giá trị và chỉ số
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];  // Tính phần tử còn lại

        // Kiểm tra nếu phần tử cần tìm đã có trong hash map
        if (num_map.find(complement) != num_map.end()) {
            result.push_back(num_map[complement]);  // Thêm chỉ số của phần tử cần tìm vào kết quả
            result.push_back(i);  // Thêm chỉ số hiện tại vào kết quả
            return result;  // Trả về kết quả ngay lập tức
        }

        // Nếu chưa có phần tử cần tìm, lưu số hiện tại vào hash map
        num_map[nums[i]] = i;
    }

    return result;  // Nếu không tìm thấy cặp nào thỏa mãn
}

int main() {
    vector<int> nums = {5, 6, 7, 8, 9,10};  // Mảng đầu vào
    int target = 15;  // Tổng mục tiêu

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;  // Không có cặp nào thỏa mãn
    }

    return 0;
}
