class Solution {
    int lb(vector<int> &nums, int low, int high, int ans, int target){
        if(low>high) return ans;
        int mid = low + (high - low)/2;
        if (nums[mid] >= target){
            ans = mid;
            return lb(nums, low, mid-1, ans, target);
        }
        else return lb(nums, mid+1, high, ans, target);
    }
    int ub(vector<int> &nums, int low, int high, int ans, int target){
        if(low>high) return ans;
        int mid = low + (high - low)/2;
        if(nums[mid]>target){
            ans = mid;
            return ub(nums, low, mid-1, ans, target);
        }
        else return ub(nums, mid+1, high, ans, target);
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int ans1 = lb(nums, 0, n-1, n, target);
        int ans2 = ub(nums, 0, n-1, n, target);
        if (ans1 == ans2) return {-1, -1};
        else return {ans1, ans2-1};
        
    }
};
