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
        // matrix = solve(matrix);
        //take transpose of the matrix
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse every row of matrix
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        
        
    }
};