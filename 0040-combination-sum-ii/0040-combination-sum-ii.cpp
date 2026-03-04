class Solution {
public:
    
    void combination(vector<int>& candidates,int index,int target, vector<vector<int>>& ans,vector<int>& path){

        if(target == 0){
            ans.push_back(path);
            return;
        }

        if(target < 0) return;

        vector<bool> used(51,false);

        for(int i = index; i < candidates.size(); i++){

            if(used[candidates[i]]) continue;

            used[candidates[i]] = true;

            path.push_back(candidates[i]);

            combination(candidates, i+1, target - candidates[i], ans, path);

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> path;

        sort(candidates.begin(), candidates.end());   // 🔹 only addition

        combination(candidates, 0, target, ans, path);

        return ans;
    }
};