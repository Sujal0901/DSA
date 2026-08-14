#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup = n;
    int sum =0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == dup){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}