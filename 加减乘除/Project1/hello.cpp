#include<iostream>
int main() {
	int a, b;
	std::cout << "�����a��b\n";
	std::cout << "a��";
	std::cin >> a;
	std::cout << "b��";
	std::cin >> b;

	std::cout << "\n\n";

	std::cout << a << "+" << b << "=" << a + b<<"\n";
	std::cout << a << "-" << b << "=" << a - b<<"\n";
	std::cout << a << "*" << b << "=" << a * b << "\n";
	if (b)
		std::cout << a << "/" << b << "=" << a / b << "\n";
	else
		std::cout << "bΪ0���������\n";
	return 0;

}