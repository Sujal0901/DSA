 # include<iostream>
 #include<vector>
using namespace std;
class Solution {
    public:
     int maxSubarraySumCircular(vector<int>& nums) {
        
        int n = nums.size();
        int maxSum = nums[0];
        int currMax = nums[0];
        int minSum = nums[0];
        int currMin = nums[0];
        int totalSum = nums[0];

        for (int i = 1; i < n; i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);

            totalSum += nums[i];
        }

        if (maxSum < 0) {
            return max(maxSum, totalSum - minSum);
        } else {
            return maxSum;
        }
}
};
int main() {
    vector<int> nums = {1, -2, 3, -2};

    Solution obj;
    int result = obj.maxSubarraySumCircular(nums);

    cout << "Maximum Sum of Circular Subarray: " << result << endl;

    return 0;
}
