#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int left = 0 ;
        int ans =0;
        for(int right = 0; right<fruits.size();right++){
            mp[fruits[right]]++;
            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
             ans= max(ans,right-left+1);
        }
       return ans;
    }

};
int main(){
    vector<int> fruits = {1,2,1};
    solution sol;
    int result = sol.totalFruit(fruits);
    cout<<result<<endl;
}