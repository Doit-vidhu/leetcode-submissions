class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if (nums[i] == 0) cnt++;

    }
    while(cnt>0){
        for (int i = 0; i<n-1; i++){
            int temp;
            if (nums[i] == 0){
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                
            }
        }
        cnt--;
    }
        
    }
};
