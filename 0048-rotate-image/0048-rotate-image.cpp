class Solution {
public:
    
    vector<vector<int>> solve(vector<vector<int>>& matrix)
    {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[j][(m-1)-i]=matrix[i][j];
            }
        }
        return ans;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        matrix = solve(matrix);
        
    }
};