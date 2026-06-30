class Solution {
  public:
   void leaves(Node* root, int &count){
       
         if(root == NULL){
             return;
         }
       
       if(root->left == NULL && root->right == NULL){
           count++;
           return;
           
       }
       
        leaves(root-> left, count);
           leaves(root-> right, count);
   }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count = 0;
        
        leaves(root, count);
        return count;
    }
    
};
class Solution {
  public:
     void sum(Node* root, int &sums){
         if(root == NULL){
             return;
             
         }
         
         
         sums = sums + root->data;
         sum(root->left, sums);
         sum(root->right, sums);
     }
  
  
    
    int sumBT(Node* root) {
        // code here
        int sums = 0;
        
        sum(root, sums);
        return sums;
    }
};
