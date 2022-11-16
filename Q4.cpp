//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorderhelp(TreeNode* root, vector<int>& x){ //Help function
        
        if(root == NULL){ //If root doesn't exist, finish the function.
            return;
        }
        inorderhelp(root->left, x);  
        x.push_back(root->val);      
        inorderhelp(root->right, x); 
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> x;
        inorderhelp(root, x);
        return x;
    }
};
