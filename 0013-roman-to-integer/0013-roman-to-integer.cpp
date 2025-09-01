class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };
        
        int i = 0;
        int total = 0;
        int n = s.length();
        
        while (i < n) {
        
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                total += (roman[s[i + 1]] - roman[s[i]]);
                i += 2; 
            } else {
                total += roman[s[i]];
                i++;
            }
        }
        
        return total;
    }
};
