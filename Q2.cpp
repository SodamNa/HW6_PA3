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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){ //Excute only when root doesn't exist
          return new TreeNode(val); //Make a new Treenode
        }
        if(root->val > val){ //If a value of root is larger than the given value
          root->left = insertIntoBST(root->left, val); //Excute insertIntoBST function until it returns a new Treenode containing of the given value.
        }
        else{ //If a value of root is smaller than the given value
          root->right = insertIntoBST(root->right, val); //Excute insertIntoBST function until it returns a new Treenode containing of the given value.
        }
        return root; //Return root after insertion.
    }
};
