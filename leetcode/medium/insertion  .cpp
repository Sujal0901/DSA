#include<iostream>
using namespace std;
int main(){
    int arr []= {4,2,7,8,1,2,5};
    int n = 7;
    for(int i = 1; i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]<arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}