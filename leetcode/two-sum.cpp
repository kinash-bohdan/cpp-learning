#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vector<int> res = {i,j};
                    
                    return res;
                }
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums{5, 6, 3, 7};
    int target = 8;
    sol.twoSum(nums, target);
    return 0;
}