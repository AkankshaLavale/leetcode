class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int> result (n);
        int start =0;
        int end =n-1;
        int pos = n-1;
        while(start<=end){
            if(abs(nums[start])>abs(nums[end])){
               result[pos] = nums[start]*nums[start];
               start++;
            }else{
                result[pos] =  nums[end]*nums[end];
                end--;
            }
            
            pos--;
        }
       return result;
    }
};