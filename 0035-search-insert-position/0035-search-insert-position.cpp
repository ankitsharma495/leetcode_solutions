class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int n = arr.size();
           int low = 0;
        int high = n - 1;
        int floorIndex = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                return mid; // Exact match found
            } 
            else if (arr[mid] <= x) {
                floorIndex = mid+1; // Update floor index
                low = mid + 1;    // Move right to find a potentially larger value that is <= x
            } 
            else {
                high = mid - 1;   // Move left as arr[mid] is greater than x
            }
        }

        return floorIndex; // Return the floor index or -1 if not found
    }
        
    
};