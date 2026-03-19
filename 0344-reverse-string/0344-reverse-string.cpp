class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        

        for(char ch : s){
            st.push(ch);
        }

        while(!st.empty()){
            for(int i=0;i<s.size();i++){
            s[i]=st.top();
            st.pop();
            }
        }

    }
};