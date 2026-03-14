class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v(2001,0);
        for (int i : arr){
            v[i+1000]++;  
        }
        v.erase(remove(v.begin(), v.end(), 0), v.end());
        set<int> myset(v.begin(), v.end());
        if(myset.size() == v.size()){
            return true;
        }
        else{
            return false;
        }


        
        
        
    }
};
