# include <iostream>
#include <vector>   
using namespace std;
class Solution {
    public:
    int maxsubarray(vector<int>&nums){
        int maxsum= nums[0];
        int currentsum = nums[0];
        for(int i = 0;i<nums.size();i++){
            currentsum = max(nums[i], currentsum+nums[i]);
            maxsum = max(maxsum ,currentsum);
        }
        return maxsum;
    }
};
int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    Solution obj;
    int result = obj.maxsubarray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}