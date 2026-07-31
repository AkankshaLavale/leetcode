class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int write = 2;
        int n = nums.size();
          if(n<=2){
                return n ; 
            }
        for(int read=2;read<n;read++){
          

            if(nums[read]!=nums[write-2]){
                nums[write]=nums[read];
                write++;
            }
           


     
        }
        return write;
    }
};