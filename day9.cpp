#include <iostream>
#include <vector>
using namespace std;
//khud ka agar mugje stack banana hai then using class
class Stack{
    public:
      vector<int> arr ;
      // insert elelment

      void push(int v){
        arr.push_back(v);
      }


      //delete elelment
      void pop(){
        arr.pop_back();
      }

      // return the top of stack elemeent

      int top(){
        return arr[arr.size()-1];
      }

      bool empty(){
        if(arr.size() == 0)
            return true;
            
       else 
            return false;
        
      }
};

int main() 
{
   Stack st;
   st.push(1);
   st.push(2);
   st.push(3);


   while(!st.empty())
   {
    cout << st.top()<< " ";
    st.pop();
   }
   return 0;
}
