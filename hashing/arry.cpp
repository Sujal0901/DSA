#include <iostream>
#include <vector>
using namespace std;
int main(){ 
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int hash[12] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    
    return 0;
}
