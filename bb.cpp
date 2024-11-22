#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;  // "Sổ tay" lưu các số đã gặp và vị trí của chúng
    vector<int> result;  // Mảng kết quả chứa hai chỉ số

    // Duyệt qua từng số trong mảng nums
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];  // Tính ra số còn lại cần tìm

        // Kiểm tra xem số cần tìm (complement) đã có trong "sổ tay" chưa
        if (num_map.find(complement) != num_map.end()) {
            result.push_back(num_map[complement]);  // Thêm chỉ số của số đã gặp vào kết quả
            result.push_back(i);  // Thêm chỉ số hiện tại vào kết quả
            return result;  // Trả về kết quả ngay lập tức
        }

        // Nếu chưa gặp số cần tìm, lưu số hiện tại vào "sổ tay"
        num_map[nums[i]] = i;
    }

    return result;  // Nếu không có cặp nào thỏa mãn, trả về mảng rỗng
}

int main() {
    vector<int> nums = {2, 7, 11, 15};  // Mảng đầu vào
    int target = 9;  // Tổng mục tiêu

    vector<int> result = twoSum(nums, target);
    
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    // In ra kết quả, ví dụ: Indices: [0, 1]

    return 0;
}
