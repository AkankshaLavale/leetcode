class Solution {
public:
    bool isPalindrome(string s) {

        string ch="";
        for(char c:s){
            if(isalnum(c)){
                ch+=tolower(c);
            }
        }
        string reversed=ch;
        reverse(reversed.begin(),reversed.end());
        return ch==reversed;

          
        
    }
};