#include<iostream>
int main() {
	int a, b;
	std::cout << "请出入a和b\n";
	std::cout << "a是";
	std::cin >> a;
	std::cout << "b是";
	std::cin >> b;

	std::cout << "\n\n";

	std::cout << a << "+" << b << "=" << a + b<<"\n";
	std::cout << a << "-" << b << "=" << a - b<<"\n";
	std::cout << a << "*" << b << "=" << a * b << "\n";
	if (b)
		std::cout << a << "/" << b << "=" << a / b << "\n";
	else
		std::cout << "b为0，输入错误\n";
	return 0;

}