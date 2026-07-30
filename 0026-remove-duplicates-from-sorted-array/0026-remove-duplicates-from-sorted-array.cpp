class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i+1;

        while(i<j && j<nums.size()){

            if(nums[i]!=nums[j]){
                i=i+1;
                nums[i]=nums[j];
                j++;
            }else{
                j++;
            }
        }
        return (i+1);
    }
};