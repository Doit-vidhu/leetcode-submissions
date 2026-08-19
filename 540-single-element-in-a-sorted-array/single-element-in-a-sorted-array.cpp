class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (nums.size() == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 1;
        int high = n-2;
        int ans;
        while (low<=high){
            int mid = (low+high)>>1;
            if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) ans = nums[mid];
            // if mid is even
            if (mid % 2 == 0 ){
                //if target is on right
                if(nums[mid] == nums[mid+1]) low = mid+1;
                // if target is on left
                else high = mid-1;
            }
            else{
                //if target is on right
                if(nums[mid] == nums[mid-1]) low = mid+1;
                else high = mid-1;
            }


        }
        return ans;


        
    }
};