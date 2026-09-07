#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;
        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int idx = 0; idx < temp.size(); idx++) {
            nums[start + idx] = temp[idx];
        }
    }

    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }
};

int main() {
    vector<int> nums = {38, 27, 43, 3, 9, 82, 10};
    int n = nums.size();
    Solution obj;
    obj.mergeSort(nums, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}