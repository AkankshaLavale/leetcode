class Solution {
public:
    
     int thirdMax(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end()); // Remove duplicates
    vector<int> uniqueNums(s.begin(), s.end());

    if (uniqueNums.size() < 3) {
        return *max_element(uniqueNums.begin(), uniqueNums.end());
    } else {
        // Sort in descending order
        sort(uniqueNums.begin(), uniqueNums.end(), greater<int>());
        return uniqueNums[2]; // third maximum
    }
}
        
    
};