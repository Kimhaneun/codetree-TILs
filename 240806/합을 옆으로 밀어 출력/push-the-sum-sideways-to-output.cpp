#include<iostream>
#include<string>

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int n, inputNum, sum = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> inputNum;
		sum += inputNum;
	}

	std::string str = std::to_string(sum);
	
	str.push_back(str.front());
	
	for (int i = 1; i < str.length(); ++i)
	{
		std::cout << str[i];
	}
	
	return 0;
}