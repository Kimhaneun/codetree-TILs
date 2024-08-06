#include<iostream>
#include<string>

int main() {
	
	std::string str1, str2;
	int a = 0, b = 0;
	std::cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] >= '0' && str1[i] <= '9')// 숫자니?
		{
			a = a * 10 + str1[i] - '0'; // 27  
		}
	}
	for (int i = 0; i < str2.size(); i++) {
		if (str2[i] >= '0' && str2[i] <= '9')// 숫자니?
		{
			b = b * 10 + str2[i] - '0'; // 27  
		}
	}
	std::cout << a + b;
}