class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int, int> freq;
       for (int num:nums ) {
       freq[num]++;
     }
     int maxi=0;
     for(auto it:freq){
        maxi=max(maxi,it.second);
     }

    int maxif = 0; 
    for (auto it : freq) {
        if (maxi == it.second) {
                maxif += it.second;
        }
    }
    return maxif;
        
    }
};