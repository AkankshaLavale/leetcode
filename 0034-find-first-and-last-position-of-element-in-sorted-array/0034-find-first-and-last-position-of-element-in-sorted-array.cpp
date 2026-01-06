class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
    int start=0 , end=nums.size()-1 , firstPosition = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid]==target){
            firstPosition = mid;
            end = mid-1;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    start = 0 , end = nums.size()-1; 
    int secondPosition = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid]==target){
            secondPosition = mid;
            start = mid+1;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = end-1;
        }
    }
    
    vector<int>ans;
    ans.push_back(firstPosition);
    ans.push_back(secondPosition);

    return ans;

    }
};