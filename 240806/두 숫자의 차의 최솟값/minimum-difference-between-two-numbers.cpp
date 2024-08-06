#include<iostream>

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int arr[10] = { 0 };
	int min = 100;
	int num;
	int n;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i + 1] - arr[i] < min)
		{
			min = arr[i + 1] - arr[i];
		}
	}

	std::cout << min;
    return 0;
}