class Solution {
public:
    bool validP(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s){
       int i = 0;
       int j = s.size()-1;

       while(i<j){ 
        if(s[i]!=s[j]){
            return validP(i+1,j,s) || validP(i,j-1,s) ;
        }else{
            i++;
            j--;

        }

       }
       return true;
    }

    
};