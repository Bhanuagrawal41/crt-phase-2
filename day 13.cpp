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


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        return 0;

        return 1+max(maxDepth(root->left), maxDepth(root->right));
    }
};

class Solution {
  public:
    void preorder(Node* node, int &count){
        if(node == NULL)
        return;
        
        
        if(node->left != NULL ||  node->right != NULL){
            count++;
        }
        
        preorder(node->left, count);
        preorder(node->right, count);
    }
  
  
    int countNonLeafNodes(Node* root) {
        // Code here
        int count = 0;
        preorder(root,count);
        return count;
        
    }
};

