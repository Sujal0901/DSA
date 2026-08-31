# include <iostream>
using namespace std;
class Solution{
    public:
    int fun(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum = sum+digit*digit;
        n = n/10;
        }
        return sum;
    }
     bool isHappy(int n) {
    int slow = fun(n);
    int fast = fun(n);
    while(fast!=1){
        slow = fun(slow);
        fast = fun(fast);
        fast = fun(fast);
        if(slow == fast && slow!= 1){
            return false;
        }
    }
    return true;
}
};
int main() {

    Solution obj;

    int n = 19;

    if (obj.isHappy(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}