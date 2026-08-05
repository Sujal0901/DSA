#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum == target) {
                return {i + 1, j + 1};
            }

            if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {};
    }
};


int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> answer = solution.twoSum(numbers, target);

    cout << answer[0] << " " << answer[1] << endl;
    return 0;
}