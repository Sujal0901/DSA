# include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void selectionsort(vector<int>&nums){
        int n = nums.size();
        for(int i = 0 ;i<n-1;i++){
            int mini = i;
            for(int j = i+1;j<n;j++){
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            swap(nums[mini],nums[i]);
        }
        // return nums;
    }
};
int main() {
    vector<int> nums = {5, 2, 4, 1, 3};

    Solution obj;
    obj.selectionsort(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}