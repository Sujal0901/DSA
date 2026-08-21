# include <iostream>
#include <vector>
using namespace std;
class solution{
    public :
    int linearsearch(vector<int>& arr , int target){
        int n = arr.size();
        for(int i =0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5 ,6,7};
    int target = 5;
    solution sol;
    int result = sol.linearsearch(arr , target);
    cout<<result<<endl;
}