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
    vector<int> postorderTraversal(TreeNode* root) { //Make a vector function to return values of TreeNode
        vector<int> sol; //Make a new vector to store values of TreeNode in postorder traverse.
        postorder(root, sol); //Excute recursion function until it stores all values of TreeNode
        return sol; //Return the vector storage containing the values of TreeNode in postorder traverse. 
    }
private:
    void postorder(TreeNode* root, vector<int>& sol) { //Help function, recursion.
        if (!root) //Excute when root == NULL, namely root doesn't exist.
            return; //Finish this function.
        postorder(root->left, sol); //Move to a left child of the root and excute the function again.
        postorder(root->right, sol); //Move to a right child of the root and excute the function again.
        sol.push_back(root->val); //Add the value of root to the vector storage. 
    }
};
