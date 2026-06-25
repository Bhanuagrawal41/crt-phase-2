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


#include <iostream>
#include <vector>
using namespace std;
//khud ka agar mugje stack banana hai then using class

class Node{
    public:
    int value;
    Node *next;
    Node(int v){
        value = v;
        next = NULL;
    }
    
};

class Stack{
    public:
    Node *head;
    
  Stack()
  {
      head = NULL;
  }
  
  
  // insert at first becoz constant time complextiy because afete this we don't have touse
  // we dont have to use the loop to excess the last elemtent
  void push(int v){
      if(head == NULL){
      Node *n = new Node(v);
      head = n;
  }
  else{
      Node *n = new Node(v);
      n->next = head;
      head = n;
  }
  
  
  
}

// delete at first same logic as the previous one
void pop(){
    if(head == NULL){
        return;
    } else if(head -> next == NULL){
        delete head;
        head = NULL;
    } else{
        Node *backup = head -> next;
        delete head;
        head = backup;
    }
    
   }
   
   int top(){
       return head -> value;
   }
   
   bool empty(){
       if(head == NULL)
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
