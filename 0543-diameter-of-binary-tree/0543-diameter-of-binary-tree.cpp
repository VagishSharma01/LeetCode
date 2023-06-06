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
     int height(TreeNode* root)
{
    //Base Case
    if(root==NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
   
    
    int ans = max(left,right) +1;
    
    return ans;
}
    
    int diameterOfBinaryTree(TreeNode* root) {
       if(root==NULL)
        {
            return 0;
        }
        
        int left_d = diameterOfBinaryTree(root->left);
        int right_d = diameterOfBinaryTree(root->right);
        int left_right_d = height(root->left) + height(root->right) ;
        
        int ans = max(left_d,max(right_d,left_right_d));
        return ans;
    }
};