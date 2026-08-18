class Solution {
    int searchele(vector<int> &nums, int target, int low, int high){
    while(low<=high){
        int mid = (low+high) >>1;
        if(nums[mid] == target) return mid;

        // to check if left side is sorted
        if(nums[mid]>= nums[low]){
            if (target >= nums[low] && target <= nums[mid]){
                high = mid-1;
            }
            else low = mid+1;
        }

        else{
            if(target>=nums[mid] && target <= nums[high]) low = mid +1;
            else high = mid-1;
        }
    }
    return -1;
}
public:
    int search(vector<int>& nums, int target) {
        return searchele(nums, target, 0, nums.size()-1);
        
    }
};
