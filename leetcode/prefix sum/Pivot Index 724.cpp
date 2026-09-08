# include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int pivotIndex(vector<int>&nums){
        int n = nums.size();
        int left = 0;
        int totalsum =0;
        for(int i =0 ; i <n ;i++){
            totalsum+= nums[i];
        }
        for(int i = 0; i <n ;i++){
            int right = totalsum-left-nums[i];
            if(left == right){
                return i;
            }
            else{
                left+= nums[i];
            }
        }
        return -1;
    }
};
int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    Solution obj;
    int result = obj.pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}