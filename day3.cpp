class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        


        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] > target){
                end = mid -1;
            } else if( nums[mid] < target){
                start = mid +1;
            } else{
                return -1;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;

        while(start <= end){
            int mid = (start + end)/2;
        // left view
          if(arr[mid] < arr[mid]){
            start = mid + 1;

          } else if(arr[mid-1] > arr[mid]){
            end = mid - 1;
          } else if(arr[mid] > arr[mid+1]){
            return mid;
          }
        }
        return -1;


        
    }
};
