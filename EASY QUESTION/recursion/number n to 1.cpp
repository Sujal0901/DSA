#include <iostream>
using namespace std;
void printnums(int n){
    if(n<1){
        return;
    }
    cout << n << " ";
     printnums(n-1);

}
int main(){
    int n;
    cin>>n;
    printnums(n);
    return 0;
}