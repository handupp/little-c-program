//Ĭ��ֵ��default���ĸ���
#include <iostream>

using std::cout;
using std::endl;

// �������������� n �� x ����
int power(int n, int x = 2);

int main() {
    // ���� power ������������
    cout << power(5) << endl;       // ��� 5 ��Ĭ�ϴ��ݣ�2���ݣ������Ϊ 25
    cout << power(4, 3) << endl;    // ��� 4 �� 3 ���ݣ����Ϊ 64
    return 0;
}

// �������壺���� n �� x ����
int power(int n, int x) {
    int ans = 1;
    for (int i = 0; i < x; i++) {
        ans *= n;  // �� n �������� x ��
    }
    return ans;   // ���ؼ�����
}
