class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hill = 0;
        int valley = 0;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        for (int i = 1; i<nums.size()-1; i++){
            if(nums[i] > nums[i-1] && nums[i]> nums[i+1]) hill++;
            else if(nums[i] < nums[i-1] && nums[i] < nums[i+1] ) valley++;
        }
        return (hill + valley);

       

        
            

        
        
    }
};
