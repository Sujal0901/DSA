# include <iostream>
 #include<vector>       
    
using namespace std;
class Solution {
    public:
    void insertionsort(vector<int>&nums){
        int n = nums.size();
        for(int i =0;i<=n-1;i++){
            int j = i;
            while(j>0&& nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
                j--;
            }
        }
    }
};
int main() {
    vector<int> nums = {12, 11, 13, 5, 6};

    Solution obj;
    obj.insertionsort(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}