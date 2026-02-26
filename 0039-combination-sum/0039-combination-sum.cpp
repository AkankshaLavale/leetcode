class Solution {
public:
    
    void solve(vector<int>& candidates, int target, int index, int tsum,
               vector<int>& current, vector<vector<int>>& ans) {
        
        if(tsum == target){
            ans.push_back(current);
            return;
        }

        if(tsum > target){
            return;
        }

        if(index >= candidates.size()){
            return;
        }

        current.push_back(candidates[index]);
        solve(candidates, target, index, tsum + candidates[index], current, ans);
        current.pop_back();   

        solve(candidates, target, index+1, tsum, current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> current;
        
        solve(candidates, target, 0, 0, current, ans);
        
        return ans; 
    }
};