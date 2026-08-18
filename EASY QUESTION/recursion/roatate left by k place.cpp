#include <iostream>
#include <vector>
using namespace std;
class solution{
    public :
    int leftrotate(vector<int>&arr , int k){
        int n = arr.size();
        for(int j = 0;j<k;j++){
            int temp = arr[0];
            for(int i =1;i<n;i++){
                arr[i-1]= arr[i];
            }
            arr[n-1]= temp;
        }
        return 0;
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 2;
    solution sol;
    sol.leftrotate(arr , k);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}