class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 1;
        int high = arr.size()-2;
        int ans;
        while(low<= high){
            int mid = (low + high) >>1;
            if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) ans = mid;
            // if the peak is on left
            if(arr[mid]<arr[mid-1] && arr[mid] > arr[mid+1]){
                high = mid-1;
            }
            /*if the peak is on right*/
            else{
                low = mid+1;
            } 
        }
        return ans;
        
    }
};