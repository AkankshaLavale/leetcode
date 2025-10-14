class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = (int)num1.size() - 1;
        int j = (int)num2.size() - 1;
        int carry = 0;
        string result;
        result.reserve(max(num1.size(), num2.size()) + 1); 

        while (i >= 0 || j >= 0 || carry) {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result.push_back(char('0' + (sum % 10)));
            --i; --j;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};