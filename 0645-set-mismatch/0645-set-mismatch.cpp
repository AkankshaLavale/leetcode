class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int duplicate =0;
        int missing =0;

        for(int i=0;i<=n;i++){
            int count=0;

            for(int j=0;j<n;j++){
                if (nums[j]==i){
                count++;
                }

            }

            if(count==2){
                duplicate=i;
            }else if(count==0){
                missing=i;
            }
        }
       
       return{duplicate,missing};

    }

    
};