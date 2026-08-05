#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i= 0;
        int res = 1;
        int j =1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]){
                j++;
                continue;

            }
            nums[i+1 ]=nums[j];
            i++;
            res++;
            j++;
        }
        return res;
    }
        
    
};
int main() {
    vector<int> nums = {1, 1, 2, 2, 3};
    Solution solution;
    int result = solution.removeDuplicates(nums);
    cout << result << endl;
    return 0;
}