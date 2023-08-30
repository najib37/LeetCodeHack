#include <iostream>
#include <numeric>
#include <ostream>
#include <vector>
#include <ranges>

using namespace std;

class Solution {
public:

	bool isSubString(string &str1, string &str2, int &i, int &j)
	{
		int a = str1.size() >= str2.size() ? str1.size() : str2.size();

		a--;
		while (i < a && j < a && str1[i] == str2[j])
		{
			j++;
			i++;
			if (j == str2.size() && j < a)
				j = 0;
			if (i == str1.size() && i < a)
				i = 0;
		}
		std::cout << "i = " << i << " j = " << j << std::endl;
		std::cout << "str1 = " << &str1[i] << " str2 = " << &str2[j] << std::endl;
		if (str1[i] == str2[j])
			return true;
		else
			return false;
	}
    string gcdOfStrings(string str1, string str2) {
		std::string result;
		int i = 0;
		int j = 0;


		if (isSubString(str1, str2, i, j))
		{
			result.assign(str1.begin(), str1.begin() + gcd(str1.size(), str2.size()));
			if (i != str1.size() && isSubString(str1, str2, ))
			return string(str1.begin(), str1.begin() + gcd(str1.size(), str2.size()));
		}
		else
			return "";
	};
};

int main(int ac, char **av)
{
	Solution sol;
	if (ac != 3)
		return 1;

	std::cout << sol.gcdOfStrings(av[1], av[2]);
	return 0;
}
