#include <iostream>
#include <cmath>
using namespace std;

// Định nghĩa hàm cần tích phân
double f(double x) {
    return x * x; // Ví dụ: f(x) = x^2
}

// Hàm tính tích phân bằng phương pháp hình thang
double calculateIntegral(double a, double b, int n) {
    double h = (b - a) / n; // Độ rộng mỗi đoạn
    double sum = 0.0;

    // Tính tổng các giá trị ở các đoạn
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }

    // Áp dụng công thức hình thang
    double integral = (h / 2) * (f(a) + 2 * sum + f(b));
    return integral;
}

int main() {
    double a, b;
    int n;

    // Nhập giới hạn tích phân và số đoạn chia
    cout << "Nhap gioi han duoi a: ";
    cin >> a;
    cout << "Nhap gioi han tren b: ";
    cin >> b;
    cout << "Nhap so doan n (n lon): ";
    cin >> n;

    // Tính tích phân
    double result = calculateIntegral(a, b, n);

    // Xuất kết quả
    cout << "Gia tri tich phan cua ham trong khoang [" << a << ", " << b << "] la: " << result << endl;

    return 0;
}
    