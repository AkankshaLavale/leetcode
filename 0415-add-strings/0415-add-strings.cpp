class Solution {
public:
    string addStrings(string num1, string num2) {

        int firstend = num1.size() - 1;
        int secondend = num2.size() - 1;

        string ans = "";
        int carry = 0;

        while (firstend >= 0 || secondend >= 0 || carry != 0) {

            int sum = carry;

            if (firstend >= 0) {
                sum += num1[firstend] - '0';
                firstend--;
            }

            if (secondend >= 0) {
                sum += num2[secondend] - '0';
                secondend--;
            }

            ans.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
