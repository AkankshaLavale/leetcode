class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int tsum =0;
        int dsum =0;
        
        for(int i=0;i<n;i++){
            tsum+=nums[i];
        }
        for(int i=0;i<n;i++){
           int d = nums[i];
           while(d > 0){
                dsum += d % 10;
                d/= 10;
            }
        }
        int ans = abs(tsum-dsum);
        return ans;

    }
};