#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int l = 0;
        int r = n - 1;

        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);

            maxArea = max(maxArea, area);

            if (height[l] <= height[r]) {
                l++;
            }
            else {
                r--;
            }
        }

        return maxArea;
    
    }
};
int main() {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = solution.maxArea(height);
    cout << "Maximum area: " << result << endl;
    return 0;
}