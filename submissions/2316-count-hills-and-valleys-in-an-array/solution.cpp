class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hill = 0;
        int valley = 0;
        int n = nums.size();
        vector<int> num1;
        for (int i = 0; i<n-1; i++){
            if(nums[i] != nums[i+1]){
                num1.push_back(nums[i]);

            }



        }
        num1.push_back(nums[n-1]);
        for (int j=1; j<num1.size()-1; j++){
            if (num1[j]>num1[j-1] && num1[j]>num1[j+1]){
                hill++;
            }
            else if (num1[j]<num1[j-1] && num1[j]<num1[j+1]){
                valley++;
            }
        }
        return (hill + valley);


        
            

        
        
    }
};
