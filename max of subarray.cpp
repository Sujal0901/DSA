#include <iostream>
#include <vector>
using namespace std;
class solution{
    public :
    int  maxSubarraySum(vector<int>& arr , int k){
        int n = arr.size();
        int low = 0;
        int high = k-1;
        int sum =0;
        int res =0;
        for (int i = low; i<=high;i++){
            sum = sum + arr[i];
        }
        res = sum;
    }
    while(high<n-1){
        // sliding the window
        sum = sum-arr[low];
        low++;
        high++;
        sum = sum+arr[high];
        res = max(res , sum);

    }
    return res;

}

int main (){
    
    