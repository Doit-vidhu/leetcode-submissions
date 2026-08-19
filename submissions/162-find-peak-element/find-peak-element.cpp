class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size()==1) return 0;
        int left = 1;
        int right = nums.size()-2;
        if (nums[0] > nums[1] && nums.size()>1) return 0;
        if (nums[right+1]>nums[right]) return right+1;
        while(left<=right){
            int mid = (left + right)>>1;
            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            if (nums[mid] < nums[mid+1]) left = mid+1;
            else right = mid-1;
        }
        return -1;

    
        
    }
};