class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int cand = 0;
        int len = nums.size();
        for(int i=0; i<len; i++){
            if (cnt == 0){
                cand = nums[i];
                cnt = 1;
            }
            else if (nums[i]== cand){
                cnt++;
            }
            else{
                cnt--;   
            }
             

        }
        return cand;
        



        
        
    }        
};
