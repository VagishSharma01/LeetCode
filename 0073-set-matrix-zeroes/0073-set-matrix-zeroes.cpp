class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    //s1 find row and col markers and set them as zero if zero found
    int row = 1;
    int col=1;
        int m = matrix.size();
        int n = matrix[0].size();
        
    for(int j=0;j<n;j++)
    {
        if(matrix[0][j]==0) row=0;
    }
    for(int i=0;i<m;i++)
    {
        if(matrix[i][0]==0) col=0;
    }
        
    //s2 mark by checking the inner matrix
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;//col
                matrix[0][j]=0;//row
            }
        }
    }
        
     //s3 check the marked matrix and fill the inner matrix
        for(int i=1;i<m;i++)
        {
            //check for columns
            if(matrix[i][0]==0)
            {
                for(int j=1;j<n;j++)
                {
                    matrix[i][j]=0;//mark inner columns
                }
            }
        }
        for(int j=1;j<n;j++)
        {
            //mark rows
            if(matrix[0][j]==0)
            {
                for(int i=1;i<m;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        //s4 now check the marked row and col variables and mark the row and col
        //if they are zero
        
        if(row==0)
        {
            for(int i=0;i<n;i++)
            {
                matrix[0][i]=0;
            }
        }
        if(col==0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }
        
        
    }
};