#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int n = 7;
    int left  = 0;
    int right = n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i =0; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}