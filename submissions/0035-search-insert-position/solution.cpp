class Solution {
    int bs(vector<int> &nums, int low, int high, int target){
        if(low>high) return -1;
        int mid = low + (high-low)/2;
        if (nums[mid] == target) return mid;
        else if(nums[mid] > target) return bs(nums, low, mid-1, target);
        else return bs(nums, mid+1, high, target);
    }
    int ub(vector<int> &nums, int low, int high, int ans, int target){
        if(low>high) return ans;
        int mid = low + (high - low)/2;
        if (nums[mid] > target){
            ans = mid;
            return ub(nums, low, mid-1, ans, target);

        }
        else return ub(nums, mid +1, high, ans, target);
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = bs(nums, 0, nums.size()-1, target);
        if (ans == -1) return ub(nums, 0, nums.size()-1, nums.size(), target);
        else return ans;
        
    }
};
