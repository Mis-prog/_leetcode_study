//https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        int current_sum = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            current_sum += nums[i];
            result.push_back(i);
            if (current_sum > target) {
                current_sum -= nums[i];
                result.pop_back();
            }
            if (current_sum == target) {
                sort(begin(result), end(result));
                return result;
            }
        }
        return vector<int>();
    }
};


int main() {
    Solution solution;
    vector<int> nums = {3,2,4};
    for (auto i:solution.twoSum(nums,6)){
        cout << i << " ";
    }
    return 0;
}
