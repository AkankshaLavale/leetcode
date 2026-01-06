class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int missing =  k;
       for(int i = 0;i<arr.size();i++){
        if(arr[i]>missing){
        return missing;
        }else{
        missing++;
        }
       }

       return missing;
    }
};