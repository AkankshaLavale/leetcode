class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 0);
      int mul = 1;
      int zero = 0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero++;
        }else{
         mul = mul*nums[i];
        }
      }
      if(zero>1){
        return answer;
      } 
      if(zero==1){
        for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    answer[i] = mul;
                }
        }
        return answer;
      }
      for(int i = 0;i<nums.size();i++){
        answer[i] = mul / nums[i];

      }
      return answer;
      }
};