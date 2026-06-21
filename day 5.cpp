// some basic of the recursion 

#include <iostream>
using namespace std;

void print(int i, int n)
{
    if ( i == 11){
        return;
    }
    
    cout << i *n << " " << endl;
    
    print(i+1, n);
}



int main()
{
    int i = 1;
    print(i, 2);
}


#include <iostream>
using namespace std;

void print(int i, int n)
{
    if ( i == 5){
        return;
    }
    
    cout << i;
    
    print(i+1, n);
}



int main()
{
    int i = 1;
    print(i, 4);
}
// finding min and max using revursion 
class Solution {
  public:
  
  
      void minmax(vector<int> &arr, int i, int min, int max, vector<int>&ans){
          
          if(i == arr.size() ){
              ans.push_back(min);
              ans.push_back(max);
              
              return;
          }
          
          
          if(arr[i] < min){
              min = arr[i];
          }
          
          
          if(arr[i] > max){
              max = arr[i];
          }
          
          
          
          minmax(arr, i+1, min, max, ans);
          
          
      }
  
     
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        // base case
        
        // int n = arr.size();
        vector<int> ans;
        
        int max = INT_MIN;
        
        
        int min = INT_MAX;
        
        minmax(arr, 0, min, max, ans);
        return ans;
        
        
       // logic 
       
       
        
        
        
    }
};
