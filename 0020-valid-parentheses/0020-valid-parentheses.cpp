class Solution {
public:
    bool isValid(string s) {
        string temp;  

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                temp += ch;  
            } else {
                if (temp.empty()) return false;  

                char last = temp.back(); 
                if ((ch == ')' && last == '(') ||
                    (ch == '}' && last == '{') ||
                    (ch == ']' && last == '[')) {
                    temp.pop_back();  
                } else {
                    return false;  
                }
            }
        }

        return temp.empty();  
    }
};
