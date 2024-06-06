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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>> nodes;

        while(!q.empty())
        {
            TreeNode* node = q.front().first;
            int hd = q.front().second.first;
            int lvl = q.front().second.second;
            nodes[hd][lvl].insert(node->val);
            q.pop();
            if(node->left)
            {
                q.push({node->left,{hd-1,lvl+1}});
            }
            if(node->right)
            {
                q.push({node->right,{hd+1,lvl+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto i : nodes)
        {
            vector<int> temp;
            for(auto j : i.second)
            {
                temp.insert(temp.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
