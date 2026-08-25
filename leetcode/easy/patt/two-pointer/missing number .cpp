# include<iostream>
# include <vector>
using namespace std;
class solution{
    public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int ans = n;
        for(int i = 0;i<n;i++){
            ans = ans^i^nums[i];

        }
        return ans;
    }
};
int main (){
  

    solution obj;

    vector<int> nums = {3, 0, 1};

    cout << obj.missingNumber(nums);

    return 0;
}

