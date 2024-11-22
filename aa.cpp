#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;  // Mảng chứa kết quả

    // Duyệt qua mảng nums lần đầu
    for (int i = 0; i < nums.size(); i++) {
        // Duyệt qua mảng nums lần thứ hai từ vị trí tiếp theo
        for (int j = i + 1; j < nums.size(); j++) {
            // Kiểm tra xem tổng của nums[i] và nums[j] có bằng target không
            if (nums[i] + nums[j] == target) {
                result.push_back(i);  // Thêm chỉ số i vào kết quả
                result.push_back(j);  // Thêm chỉ số j vào kết quả
                return result;  // Trả về kết quả ngay lập tức
            }
        }
    }

    return result;  // Nếu không có cặp nào thỏa mãn, trả về mảng rỗng
}

int main() {
    vector<int> nums = {3, 10, 11, 15};  // Mảng đầu vào
    int target = 13;  // Tổng mục tiêu

    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

