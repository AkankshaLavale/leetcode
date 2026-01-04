class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){

            if ((i > 0 && nums[i] == nums[i-1])||i < n-1 && nums[i] == nums[i+1]){
                continue; 
            }
            sum+=nums[i];
        }
        return sum;
    }
};