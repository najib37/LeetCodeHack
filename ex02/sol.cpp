#include <iostream>
#include <numeric>
#include <ostream>
#include <vector>
#include <ranges>

using namespace std;

class Solution {
public:

    string gcdOfStrings(string str1, string str2) {

		if (str1 + str2 == str2 + str1)
			return string(str1.begin(), str1.begin() + gcd(str1.size(), str2.size()));
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
