#include <iostream>
#include <ctime>
using namespace std;

unsigned long long fibonacci(int x) {
    if (x <= 1) return x; // กรณี base case
    unsigned long long prev1 = 0, prev2 = 1, current = 0;
    for (int i = 2; i <= x; ++i) {
        current = prev1 + prev2; // คำนวณ Fibonacci
        prev1 = prev2; // อัพเดตค่า
        prev2 = current;
    }
    return current;
}

int main() {
    clock_t start = clock(); // เริ่มจับเวลา
    cout << "Result: " << fibonacci(50) << "\n"; // คำนวณ Fibonacci(50)
    clock_t end = clock(); // จบการจับเวลา
    double elapsed = double(end - start) / CLOCKS_PER_SEC; // คำนวณเวลาที่ใช้
    cout << "Elapsed Time: " << elapsed << " seconds."; // แสดงเวลาที่ใช้
    return 0;
}
