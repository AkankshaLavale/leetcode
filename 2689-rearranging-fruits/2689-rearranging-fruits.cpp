class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> freq;

        
        for (int x : basket1) freq[x]++;
        for (int x : basket2) freq[x]--;

        
        vector<int> surplus;
        for (auto& [val, count] : freq) {
            if (count % 2 != 0) return -1; 
            for (int i = 0; i < abs(count) / 2; ++i)
                surplus.push_back(val);
        }


        if (surplus.empty()) return 0;

        
        int minFruit = *min_element(basket1.begin(), basket1.end());
        minFruit = min(minFruit, *min_element(basket2.begin(), basket2.end()));

        
        sort(surplus.begin(), surplus.end());

        long long cost = 0;
        int n = surplus.size();

    
        for (int i = 0; i < n / 2; ++i) {
            cost += min((long long)surplus[i], 2LL * minFruit);
        }

        return cost;
    }
};
