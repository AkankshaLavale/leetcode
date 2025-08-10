class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if (n == 1) 
            return true; 

        string s = to_string(n);
        sort(s.begin(), s.end()); 

        for (int i = 0; i < 31; i++) {
            long long power = pow(2, i);
            string p = to_string(power);
            sort(p.begin(), p.end());
            if (s == p) 
                return true; 
        }

        return false; 
    }
};
