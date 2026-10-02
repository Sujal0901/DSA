#include<iostream>
using namespace std;
 int arr[] = {4 ,2,7,8,1,2,5};
int n = 7;
int main(){
    int target;

    cin >> target;
    for( int i=0;i<n;i++){
        if(arr[i] == target){
            cout << "Found at index " << i << endl;

            return 0;
        }
    }
    cout << "Not Found" << endl;
    return  0;
}