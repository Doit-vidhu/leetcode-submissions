class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i<n; i++){
            arr[i] += 1000;
        }
        vector<int> freq(2001, 0);
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        vector<int>freq2(1001, 0);
        for(int i = 0; i<2001; i++){
            if(freq[i]>0) {freq2[freq[i]]++;}
        }


        for(int i = 1; i<1001; i++){
            if (freq2[i]>1){
                return false;
            }
        }
        return true;
        
    }
};
