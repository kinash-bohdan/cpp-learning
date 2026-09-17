#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int max_count = 0;
        int max_element = nums[0];
        for(int i=0; i < size; i++){
            int count = 0;
            
            for(int j = 0; j<size;j++){
                if(nums[i]==nums[j]) count ++;
            }
            if (count > max_count){
                max_count = count;
                max_element = nums[i];
            }
        }return max_element;
    }
};

int main()
{
    Solution sol;
    vector<int> s = {5,3,2,0,0,0,0,12,3};
    cout << sol.majorityElement(s) << endl;
}