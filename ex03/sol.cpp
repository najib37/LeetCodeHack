#include <algorithm>
#include <iostream>
#include <numeric>
#include <ostream>
#include <vector>
#include <ranges>

using namespace std;

class Solution {
public:
   vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

		std::vector<bool> res;
		auto max = std::max_element(candies.begin(), candies.end());

		res.reserve(candies.size());
		for (auto i : candies)
			res.push_back((*max <= i + extraCandies));
		return res;
	}
};

int main(int ac, char **av)
{
	Solution sol;
	
	std::vector<int> candies = {1,5,7,8,9,2,1,4,5,7,8};
	std::vector<bool> res = sol.kidsWithCandies(candies, 10);

	for (bool temp : res)
		std::cout << std::boolalpha << temp << " ";
	std::cout << std::endl;
	return 0;
}
