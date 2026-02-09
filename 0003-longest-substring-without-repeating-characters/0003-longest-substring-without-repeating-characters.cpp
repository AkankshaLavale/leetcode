class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool frq[256] = {0};
        int start = 0;
        int end = 0;
        int ans = 0;

        while(end<s.size()){
            while(frq[s[end]]){
             frq[s[start]]=0;
             start++;
            }
           
            frq[s[end]]=1;
            end++;
            ans = max(ans,end-start);

        }
      return ans;

    }
};