#include<iostream>
using namespace std;
class Solution{
    public:
    void reverseString(string &s) {
        int left = 0;
        int right = s.length() - 1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
            }
}
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    obj.reverseString(s);
    cout<<s;
    return 0;
}