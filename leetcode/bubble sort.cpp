#include<iostream>
using namespace std;
int main(){
    int arr [] = {4,2,7,8,1,2,5};
    int n = 7;
    for(int i =0; i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}