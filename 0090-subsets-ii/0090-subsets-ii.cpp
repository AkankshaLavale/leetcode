class Solution {
public:
    
    void solve(vector<int>& nums, int index, vector<int>& current, set<vector<int>>& result){
        
        if(index == nums.size()){
            result.insert(current);  
            return;
        }
        current.push_back(nums[index]);
        solve(nums, index+1, current, result);
        
        current.pop_back();
      
        solve(nums, index+1, current, result);
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()); 
        
        set<vector<int>> result;
        vector<int> current;
        
        solve(nums, 0, current, result);
        
        return vector<vector<int>>(result.begin(), result.end());
    }
};