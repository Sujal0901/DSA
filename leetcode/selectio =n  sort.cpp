#include<iostream>
using namespace std;
int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int n =7;
    for(int i = 0; i<n -1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}