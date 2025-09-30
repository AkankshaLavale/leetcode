class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans="";
         char c;
         sort(strs.begin(),strs.end());

         string front=strs.front();
         string last=strs.back();
         for(int i=0;i<front.size();i++){

            if(front[i]==last[i]){

                ans+=front[i];

               

            }

            else{
                break;
            }
 

         }
        return ans;
    }
};