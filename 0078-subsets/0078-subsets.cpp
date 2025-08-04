class Solution {
public:
    void subsequence(vector<int>& arr, int index, vector<vector<int>>& ans, vector<int>& temp) {
        if (index == arr.size()) {
            ans.push_back(temp);
            return;
        }

      
        subsequence(arr, index + 1, ans, temp);

        temp.push_back(arr[index]);
        subsequence(arr, index + 1, ans, temp);

        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsequence(nums, 0, ans, temp);
        return ans;
    }
};
