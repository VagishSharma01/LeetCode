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
    
//       int height(TreeNode* root)
//          {
//     //Base Case
//          if(root==NULL)
//             {
//         return 0;
//             }
//             int left = height(root->left);
//             int right = height(root->right);
   
    
//             int ans = max(left,right) +1;
    
//             return ans;
//             }
    
    pair<bool,int> isBalancedFast(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p;
            p.first=true;
            p.second=0;
            return p;
        }
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        
        bool l = left.first;
        bool r = right.first;
        int lh = left.second;
        int rh = right.second;
        
        bool diff = (abs(lh-rh)<=1);
        
        pair<bool,int> ans;
        ans.second = max(lh,rh)+1;
        
        if(l && r && diff)
        {
            ans.first=true;
            return ans;
        }
        else
        {
            ans.first=false;
            return ans;
        }
    }
    
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL)
//         {
//             return true;
//         }
//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);
        
//         bool diff = abs(height(root->left)-height(root->right))<=1;
//         if(left && right && diff)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
    
    bool isBalanced(TreeNode* root)
    {
        pair<bool,int> p = isBalancedFast(root);
        bool ans = p.first;
        return ans;
    }
    
    
};