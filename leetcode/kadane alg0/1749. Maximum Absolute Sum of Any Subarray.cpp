# include<iostream>
# include<vector>
using namespace std;
class Solution {
    public :
    int maxAbsoluteSum(vector<int>& nums){
        int n = nums.size();
        int currentmax = 0;
        int currentmin =0;

        int maxsum =0;
        int minsum = 0;
        for(int i =0;i<n;i++){
            currentmax =max(nums[i],currentmax + nums[i]);;
            currentmin = min(nums[i],currentmin + nums[i]);
            

            maxsum = max( maxsum , currentmax);
            minsum = min( minsum , currentmin);
        }
        return max(maxsum, -minsum);
    }
};
int main() {
    vector<int> nums = {1, -3, 2, 3, -4};

    Solution obj;
    int result = obj.maxAbsoluteSum(nums);

    cout << "Maximum Absolute Sum of Any Subarray: " << result << endl;

    return 0;
}
