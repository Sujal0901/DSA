#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==target){
                return {i+1,j+1};
            } if(sum<target){
                i++;
        }
        else{
                j--;
            }
        }
        return {};
    }
};
int main() {
    vector<int> nums = {1, 1, 2, 2, 3};
    int target = 3;

    Solution solution;
    vector<int> answer = solution.removeDuplicates(nums);

    cout << answer[0] << " " << answer[1] << endl;
    return 0;
}