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
    
    void store(TreeNode* root,vector<int> &ans)
    {
         if(root==NULL)
        {
            return ;
        }
        
        ans.push_back(root->val);
         store(root->left,ans);
         store(root->right,ans);
        
        return ;
    }
    
    int getMinimumDifference(TreeNode* root) {
       vector<int> ans;
        store(root,ans);
        sort(ans.begin(),ans.end());
        int a=INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            a = min(a,abs(ans[i]-ans[i-1]));
        }
        return a;
        
    }
};