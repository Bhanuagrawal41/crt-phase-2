
// binary searach 
// leet code 704
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
// peak index in an mountain array 
// leet code 852
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


//little bit hard but easy to understaand in this we have minimum page allocation problem form the geek for geeks so hgere the solution that i understadnd tried to codee

class Solution {
public:

    bool isPossible(vector<int>& arr, int k, int mid) {

        int student = 1;
        int pages = 0;

        for (int i = 0; i < arr.size(); i++) {

            // Single book exceeds limit
            if (arr[i] > mid) {
                return false;
            }

            if (pages + arr[i] <= mid) {
                pages += arr[i];
            }
            else {
                student++;
                pages = arr[i];

                if (student > k) {
                    return false;
                }
            }
        }

        return true;
    }

    int findPages(vector<int> &arr, int k) {

        int n = arr.size();

        if (k > n) {
            return -1;
        }

        int sum = 0;
        int maxi = 0;

        for (int x : arr) {
            sum += x;
            maxi = max(maxi, x);
        }

        int s = maxi;
        int e = sum;
        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (isPossible(arr, k, mid)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return ans;
    }
};
