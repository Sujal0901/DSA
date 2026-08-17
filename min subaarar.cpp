#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int minSubArraylen(int target ,vector<int>& nums){
        int n = nums.size();
        int low = 0;
        int high = 0;
        int sum =0;
        int res = INT_MAX;
        while(high<n){
            sum = sum+nums[high];
            high++;
            while(sum>=target){
                int len = high-low;
                res= min(res,len);
                sum = sum - nums[low];
                low++;
                
            }
        }
        if(res == INT_MAX)
        return 0;
        return res;
    }
};
int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    solution sol;
    int result = sol.minSubArraylen(target, nums);
    cout<<result<<endl;
}