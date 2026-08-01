class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n  = matrix[0].size();
        vector<int> p ;
        int top = 0 , bottom = m-1;
        int left = 0 , right = n-1;

        while(top<=bottom && left<=right)
        {
            for(int i=left ; i<=right ; i++)
            {
                p.push_back(matrix[top][i]);

            }  
            top++;

            for(int j = top ; j<=bottom ; j++)
            {
                p.push_back(matrix[j][right]);
            }
            right--;

            if(top<=bottom)
            {
                for(int k = right ; k>=left ; k--)
                {
                    p.push_back(matrix[bottom][k]);
                }
                bottom--;
            }
         
            if(left<=right)
            {
                for(int l = bottom ; l>=top ; l--)  
                {
                    p.push_back(matrix[l][left]);

                } 
                left++;
            }
       

        }
        return p;


       
    }
};
