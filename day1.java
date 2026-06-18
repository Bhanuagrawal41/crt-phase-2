// this is for the sorted array 
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i = 0;
        int j = numbers.length-1;

        while(i < j){
            if(numbers[i] + numbers[j] == target){
                return new int[]{i+1,j+1};
            }

            else if(numbers[i] + numbers[j] < target){
                i++;
            }
            else{
                j--;
            }
        }

        return new int[]{};

        
    }
}

// this is for the unsorted array  --
class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0; i < nums.length-1; i++){
            for(int j = i + 1; j < nums.length; j++){
                if(nums[i] + nums[j] == target){
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
        
    }
}
class Solution {
    int maxSubarraySum(int[] arr) {
          int sum = 0;
        int maxsum = Integer.MIN_VALUE;
        
        for(int i = 0; i<arr.length; i++){
            sum = sum + arr[i];
            maxsum = Math.max(maxsum,sum);
            
            
             if(sum < 0){
                sum = 0;
            }
        }
        // Code here
        return maxsum;
        
    }
}


class Solution {
    public int maxSubarraySum(int[] arr, int k) {
        // Code here
        int max_sum = Integer.MIN_VALUE;
        int curr_sum = 0;
        int i = 0;
        int j = 0;
        
        while(j < arr.length){
            curr_sum += arr[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                max_sum = Math.max(max_sum,curr_sum);
                 curr_sum -= arr[i];
                
                j++;
                i++;
               
            }
        }
        return max_sum;
    }
}

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < nums.size(); i++){
           if(nums[i] == 0) count0++;
          else if(nums[i]==1) count1++;
          else count2++;
     
         


        }
            for(int i = 0; i < nums.size(); i++){
            if(i < count0){
                nums[i] = 0;
            } else if(i < count0 + count1){
                nums[i] = 1;
            }else{
                nums[i] = 2;
            }
        
    }
    }
};

//dutch national flag algorithm
// optimal approach dutch natinal flag algo using three pointer 
    int low = 0;
     int mid = 0;
     int high = nums.size() - 1;

     while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1){
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
     }





    }
};
