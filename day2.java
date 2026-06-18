// day 2 leetcode problem no 169 majority element

// solution using brute force method in which we are using two pointer approach
class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){

               if(nums[i] == nums[j]){
                count++;

               }
               
            }
             if(count > n/2){
                return nums[i];
               }
        }
        return -1;
        
    }
}


class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long i = 0;
        long long j = 0;
        long long count = 0;
        long long score = 0;

        while(j < nums.size()){
            score = score + nums[j];

            while(score  * (j-i+1) >= k ){
                score = score - nums[i];
                i++;
            }
            count = count + (j-i + 1);
            j++;

            
        }
     return count;
        
    }
};
// now in this question we have to check that we can spilt a array in such way that both part has the same subarray sum
class Solution {
    public boolean canSplit(int arr[]) {
        // code he
        int total = 0;
        for(int i = 0; i< arr.length; i++){
            total +=  arr[i];
            
        }
        int sum = 0;
        int sum2 = 0;
        for(int j = 0; j<arr.length-1; j++)
        {
            sum = sum + arr[j];
         sum2 = total - sum;
          if(sum == sum2){
            return true;
        }
            
            
            
        }
       
        
        
        return false;
    }
}//moore voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        

        unordered_map<int , int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int max = INT_MIN;
        int ans;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] > max){
                max = mp[nums[i]];
                ans = nums[i];
            }

        }
        return ans;
        
