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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp = root; // Assign temp as root to search the val.
        while(temp != NULL){ // Repeat searching until temp is empty.
            if(temp->val == val){ // If a value of temp is the same as the val.
                return temp; // Return temp and end. 
            }
            else if(val < temp->val){ //If a value of temp is bigger than the val.
                temp = temp->left; // Move to left child of the temp.
            }
            else{ // If a value of temp is smaller than the val.
                temp = temp->right; // Move to right child of the value.
            }
        }
        return NULL; // End this function.
    }
};
