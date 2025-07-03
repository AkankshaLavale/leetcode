class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // value -> index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // check if complement already exists
            if (map.find(complement) != map.end()) {
                return {map[complement], i}; // found the pair
            }

            // store current number with its index
            map[nums[i]] = i;
        }

        return {}; // will not reach here as per problem statement (exactly one solution exists)
    }
};