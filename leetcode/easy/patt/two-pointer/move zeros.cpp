#include <iostream>
#include <vector>
using namespace std;
void movezeros(vector<int>& nums) {
    int j =0;
    for(int i =0; i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
};
 int main(){
    vector<int>nums = {0,1,0,3,12};
    movezeros(nums);
    for( auto i:nums){
        cout<<i<<" ";
    }
 }