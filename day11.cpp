class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> max_heap;
        
        for(int i = 0; i<arr.size(); i++){
            max_heap.push(arr[i]);
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
        return max_heap.top();
    }
};

class Solution {
  public:
 
  long long kthsmallest(long long A[], long long N, long long k ){
      priority_queue<long long> max_heap;
      
      for(int i = 0; i<N; i++){
          max_heap.push(A[i]);
          if(max_heap.size()>k)
          max_heap.pop();
      }
      
      return max_heap.top();
  }
  
 
  
  
  
  
  
  
  
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
        
       long long first = kthsmallest(A,N,K1);
       long long second = kthsmallest(A, N, K2);
       
       long long sum = 0;
       for(int i = 0; i<N; i++){
           if(A[i] > first && A[i] < second){
               sum += A[i];
           }
       }
       return sum;
        
        
        
    }
};
