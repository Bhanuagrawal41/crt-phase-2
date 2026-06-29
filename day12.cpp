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

  void traversal(TreeNode* root, vector<int>& ans){
    // base condition 
    if(root == nullptr){
        return;

    }

    // logic
    ans.push_back(root->val);
    traversal(root ->left, ans);
    traversal(root->right, ans);

  }


    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, ans);
        return ans;
        
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
    void postorder(TreeNode *root, vector<int> &arr){
        //base case
        if(root == NULL){
            return;
        }
        postorder(root->left,arr);
        postorder(root->right,arr);
        arr.push_back(root->val);
    }



public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        postorder(root, arr);
        return arr;
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


     void inorder(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        return arr;
        
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


     void inorder(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        return arr;
        
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


     vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector <int>> ans;
     

     if(root == NULL)
     return ans;

     queue<TreeNode*> q; // fifo order
     q.push(root);

     while(!q.empty()){
        int n = q.size();
        vector<int> v;

        while(n>0){
         TreeNode *temp = q.front();
         q.pop();
         v.push_back(temp->val);

         if(temp->left != NULL)
            q.push(temp->left);
         if(temp -> right != NULL)
         q.push(temp->right);

         n--;
        }
        ans.push_back(v);

     }
     return ans;
     }
};
