class Solution {
public:
    int recursive(vector<int>& nums, int s, int e, int target){
        if(s > e){
            return -1;
        }
        int mid = (s + e)/ 2;

        if(nums[mid] == target){
            return mid;
            
        }
        else if(nums[mid]>target){
           return recursive(nums, s, mid-1, target);
        } else{
             return recursive(nums, mid +1, e, target);
        }
        



    }





    int search(vector<int>& nums, int target) {
        // int start = 0;
        // int end = nums.size()-1;
        
        // int mid = start + end / 2;
        

        return recursive(nums, 0, nums.size()-1, target);
        


        // while(start <= end){
        //     int mid = (start + end)/2;
        //     if(nums[mid] == target){
        //         return mid;
        //     } else if(nums[mid] > target){
        //         end = mid -1;
        //     } else if( nums[mid] < target){
        //         start = mid +1;
        //     } else{
        //         return -1;
        //     }
        // }
        // return -1;
    }
};
