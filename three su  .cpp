#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {

            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            int sum = -nums[i];

            while(left < right) {

                int s = nums[left] + nums[right];

                if(s == sum) {

                    result.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                }
                else if(s < sum) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return result;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);

    for(const auto& triplet : result) {
        cout << "[";
        for(size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if(i < triplet.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}