# include<iostream>
#include<vector>    
using namespace std;
class Solution {
    public:
    int maxproduct(vector<int>&nums){
        int maxi = nums[0];
        int mibi = nums[0];
        int ans = nums[0];
        for (int i =1 ;i< nums.size();i++){
            if(nums[i]<0){
                swap(maxi,mibi);
            }
            maxi = max(nums[i], maxi * nums[i]);
            mibi = min(nums[i], mibi * nums[i]);
            ans = max(ans, maxi);
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {2, 3, -2, 4};

    Solution obj;
    int result = obj.maxproduct(nums);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}