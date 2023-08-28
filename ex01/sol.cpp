#include <iostream>

using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;

        result.reserve(word1.size() + word2.size());
        auto it1 = word1.begin();
        auto it2 = word2.begin();
        
        while (it1 != word1.end() || it2!=word2.end())
        {
            if (it1 != word1.end())
                result += *(it1++);
            if (it2 != word2.end())
                result += *(it2++);
        }
    return result;
    }
};

int main(int ac, char **av)
{
	if (ac != 3)
		return 1;
	Solution sl;

	std::cout << sl.mergeAlternately(av[1], av[2]) << std::endl;
}
