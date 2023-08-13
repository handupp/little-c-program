//默认值（default）的概念
#include <iostream>

using std::cout;
using std::endl;

// 函数声明：计算 n 的 x 次幂
int power(int n, int x = 2);

int main() {
    // 调用 power 函数并输出结果
    cout << power(5) << endl;       // 输出 5 的默认次幂（2次幂），结果为 25
    cout << power(4, 3) << endl;    // 输出 4 的 3 次幂，结果为 64
    return 0;
}

// 函数定义：计算 n 的 x 次幂
int power(int n, int x) {
    int ans = 1;
    for (int i = 0; i < x; i++) {
        ans *= n;  // 将 n 乘以自身 x 次
    }
    return ans;   // 返回计算结果
}
