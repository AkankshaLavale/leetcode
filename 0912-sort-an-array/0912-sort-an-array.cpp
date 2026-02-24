class Solution {
public:
    
    void merge(vector<int>&nums,int left,int mid,int right){
        vector<int>temp;
        int start = left;
        int end = mid+1;

        while(start<=mid && end<=right){
            if(nums[start]<=nums[end]){
                temp.push_back(nums[start]);
                start++;
            }else{
                temp.push_back(nums[end]);
                end++;
            }
        }
        while(start<=mid){
            temp.push_back(nums[start]);
            start++;
        }
        while(end<=right){
            temp.push_back(nums[end]);
            end++;
        }
      
        for(int i = left; i <= right; i++) {
            nums[i] = temp[i - left];
        }
    
    }
    
    void mergeSort(vector<int>&nums,int left,int right){
        if(left >= right)
           return;
        int mid = left+(right-left)/2;
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};