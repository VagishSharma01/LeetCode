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
//      int height(TreeNode* root)
// {
//     //Base Case
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root->right);
   
    
//     int ans = max(left,right) +1;
    
//     return ans;
// }
    
//     int diameterOfBinaryTree(TreeNode* root) {
//        if(root==NULL)
//         {
//             return 0;
//         }
        
//         int left_d = diameterOfBinaryTree(root->left);
//         int right_d = diameterOfBinaryTree(root->right);
//         int left_right_d = height(root->left) + height(root->right) ;
        
//         int ans = max(left_d,max(right_d,left_right_d));
//         return ans;
//     }
    
    
     pair<int,int> diameterFast(TreeNode* root) {
         
       if(root==NULL)
        {
            pair<int,int> p;
           p.first =0;
           p.second=0;
           return p;
        }
         
         pair<int,int> left = diameterFast(root->left);
         pair<int,int> right = diameterFast(root->right);
         
         int l_height = left.first;
         int r_height = right.first;
         int l_dia = left.second;
         int r_dia = right.second;
         
         int height = max(l_height,r_height)+1;
         int diameter = max(l_height+r_height,max(l_dia,r_dia));
         
         pair<int,int> ans;
         ans.first = height;
         ans.second = diameter;
        
         return ans;
    }
    
    int diameterOfBinaryTree(TreeNode* root){
        pair<int,int> ans = diameterFast(root);
        return ans.second;
    }
    
    
};