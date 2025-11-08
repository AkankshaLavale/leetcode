class Solution {
public:
    int findShortestSubArray(const vector<int>& nums) {
    unordered_map<int,int> count, first, last;
    for (int i = 0; i < (int)nums.size(); ++i) {
        int x = nums[i];
        if (first.find(x) == first.end()) first[x] = i;
        last[x] = i;
        ++count[x];
    }

    int degree = 0;
    for (auto &p : count) degree = max(degree, p.second);

    int ans = nums.size();
    for (auto &p : count) {
        if (p.second == degree) {
            int x = p.first;
            int len = last[x] - first[x] + 1;
            ans = min(ans, len);
        }
    }
    return ans;
}
};