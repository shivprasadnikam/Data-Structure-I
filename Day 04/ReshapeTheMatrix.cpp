

                                                            // Reshape the Matrix //

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)     {
        int rows=mat.size();
        int colms=mat[0].size();
        vector<vector<int>> output(r,vector<int>(c));
        if(r*c!=rows*colms)
            return mat;
        
        //traverse matrix and adding into output
        int rows_number=0;
        int col_number=0;
        for(int i=0; i<rows; i++)
        {
           
            for(int j=0; j<colms; j++)
            {
                 output[rows_number][col_number]=mat[i][j];
                 col_number++;
                if(col_number==c)
                {
                    
                    rows_number++;
                    col_number=0;
                }
                 
            }
        }
        return output;
    }
};
