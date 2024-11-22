#include <iostream>
#include <unordered_map> // Hashmap
#include <queue>         // Priority queue (Heap)
#include <vector>
#include <string>

using namespace std;

// Hàm tìm món ăn phổ biến nhất
string findMostPopularDish(const vector<string>& dishes) {
    // Bước 1: Tạo hashmap để đếm số lần mỗi món ăn xuất hiện
    unordered_map<string, int> dishCount;
    for (const string& dish : dishes) {
        dishCount[dish]++;
    }

    // Bước 2: Sử dụng priority queue (heap) để tìm món ăn phổ biến nhất
    priority_queue<pair<int, string>> maxHeap;
    for (const auto& entry : dishCount) {
        // Đưa số lần xuất hiện (entry.second) và tên món ăn (entry.first) vào heap
        maxHeap.push({entry.second, entry.first});
    }

    // Bước 3: Món ăn phổ biến nhất nằm ở đỉnh của heap
    pair<int, string> mostPopular = maxHeap.top();

    return mostPopular.second;
}

int main() {
    // Danh sách các món ăn được chọn
    vector<string> dishes = {"pizza", "burger", "pizza", "sushi", "burger", 
                             "pizza", "sushi", "sushi", "burger"};

    // Tìm món ăn phổ biến nhất
    string mostPopularDish = findMostPopularDish(dishes);

    // In kết quả
    cout << "Món ăn phổ biến nhất là: " << mostPopularDish << endl;

    return 0;
}