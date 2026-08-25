# include <iostream>
#include<vector>
using namespace std;
class Solution{
    public :
    int longestOnes(vector<int>& nums ,int k){
        int high = 0; 
         int low = 0 ;
         int n = nums.size();
         int count = 0;
         int ans = 0;
         for(high = 0; high <n ;high++){
            if(nums[high]== 0)
            count++;
            while(count>k){
                if(nums[low]==0)
                count--;
                low++;
            }
            ans = max(ans, high - low +1);
         }
         return ans;
    }
    };
    int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    Solution s;

    cout << s.longestOnes(nums, k);

    return 0;
}
    