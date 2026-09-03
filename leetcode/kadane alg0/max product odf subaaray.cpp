# include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int maxproduct(vector<int>&arr){
        int maxi = arr[0];
        int mini = arr[0];
        int ans = arr[0];
        for(int i = 1;i<arr.size();i++){
           if(arr[i]<0){
            swap(maxi,mini);
           }
           maxi = max(arr[i],maxi*arr[i]);
           mini = min(arr[i],mini*arr[i]);
           ans = max(ans,maxi);
        }
        return ans;
    }
};
int main() {
    vector<int> arr = {2, 3, -2, 4};

    Solution obj;
    int result = obj.maxproduct(arr);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}