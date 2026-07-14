class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mpp;
        set<int> st;
        for(int i = 0; i<arr.size(); i++){
            mpp[arr[i]]++;

        }
        for(auto& [key, value] : mpp){
            st.insert(value);
        }
        if (mpp.size() == st.size()) return true;
        else return false;
        
    }
};
