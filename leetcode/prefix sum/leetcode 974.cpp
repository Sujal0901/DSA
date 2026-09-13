# include<iostream>
# include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]= 1;
        int count = 0;
        int prefixsum =0;
        for(int i =0; i<nums.size();i++){
            prefixsum += nums[i];
            int rem = prefixsum%k;
            if(rem<0){
                rem= rem+k;
                if(mp.count(rem)){
                    count = count + mp[rem];
                    mp[rem]++;
                }
            }
           
        }
        return count;
    }
};
int main() {
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;

    Solution obj;
    int result = obj.subarraysDivByK(nums, k);

    cout << "Number of subarrays divisible by " << k << ": " << result << endl;

    return 0;
}
