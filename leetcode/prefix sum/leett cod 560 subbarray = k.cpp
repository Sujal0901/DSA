# include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
    public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int  ans= 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(mp.find(sum - k) != mp.end()){
                ans += mp[sum - k];
            }
            mp[sum]++;
        }
        return ans;
    }

}; 
int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    Solution obj;
    int result = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << ": " << result << endl;

    return 0;
}