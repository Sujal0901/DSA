#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
  
   int left = 0;
   int right = 0;
   int maxFreq = 0;
   int ans = 0;
   for(int right = 0;right<s.size();right++){
    freq[s[right]-'A']++;
    maxFreq = max(maxFreq ,freq[s[right] -'A']);
    int windowsize = right-left+1;
    int replacements = windowsize-maxFreq;
    while(replacements>k){
               freq[s[left] - 'A']--;
                left++;

                windowsize = right - left + 1;
                replacements = windowsize - maxFreq;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }

};
int main(){
    string s = "ABAB";
    int k = 2;
    Solution sol;
    int result = sol.characterReplacement(s , k);
    cout<<result<<endl;
}