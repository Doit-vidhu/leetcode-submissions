class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> v(n+1, 0);
        int i = n-1;
        int m = n;
        
        for(int j = n; j>=1; j--){
            v[j] = digits[i];
            i--;
            
        }
        if(digits[n-1] != 9){
            digits[n-1]++;
            return digits;
        }
        else {

            
            v[n]++;
            while(v[m] == 10){
                v[m] = 0;
                v[m-1]++;
                m--;
            }
            
            if(v[0] == 0) v.erase(v.begin());
            return v;
        }

       
        
            
                


                

             
        
        
    }
};
