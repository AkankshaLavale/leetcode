class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int capacity){
        int usedDays = 1;
        int load = 0;

        for(int w : weights){
            if(load + w <= capacity){
                load += w;
            } else {
                usedDays++;
                load = w;
            }
        }
        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(isPossible(weights, days, mid)){
                ans = mid;
                end = mid - 1;   
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
