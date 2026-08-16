#include <iostream>
using namespace std;

void function(int n,int i){
    if(i>n){
        return;
    }
    cout << "sujal" << endl;
    function(n,i+1);
}
int main(){
    int n;
    cin>>n;
    function(n,1);
    return 0;
}
