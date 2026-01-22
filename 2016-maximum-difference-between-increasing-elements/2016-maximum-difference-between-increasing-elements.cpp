class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans =-1;
        vector<int>sufixMax(n);
        sufixMax[n-1] = nums[n-1];

        for(int i=n-2;i>-1;i--){
            sufixMax[i] = max(nums[i],sufixMax[i+1]);
        }

        for(int i=0;i<n-1;i++){
            if(sufixMax[i+1]>nums[i]){
               ans=max(ans,sufixMax[i+1]-nums[i]);
            }
        }

        return ans;
    }
};