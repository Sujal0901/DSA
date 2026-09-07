# include <iostream>
 #include<vector>
using namespace std;
class Solution {
    public:
     void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};
int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};

    Solution obj;
    obj.bubbleSort(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}