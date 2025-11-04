class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        if (n < 2) return 0;
        int prev_count = 0;        
        int curr_count = 1;         
        int ans = 0;
        
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i-1]) {
                ++curr_count;
            } else {
               
                ans += min(prev_count, curr_count);
                prev_count = curr_count;
                curr_count = 1;
            }
        }
       
        ans += min(prev_count, curr_count);
        return ans;
    }
};
