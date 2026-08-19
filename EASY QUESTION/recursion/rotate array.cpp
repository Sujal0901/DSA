#include <iostream>
#include <vector>
using namespace std;
class solution{
    public :
void leftRotate(vector<int>& arr , int k){
        int n = arr.size();
        for(int j = 0;j<k;j++){
            int temp = arr[0];
            for(int i =1;i<n;i++){
                arr[i-1]= arr[i];
            }
            arr[n-1]= temp;
        }
    }
    int main(){
        vector<int> arr = {1,2,3,4,5 ,6,7}};
        int k = 3;
        solution sol;
        sol.leftRotate(arr , k);
        for(int i =0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }

    }
};