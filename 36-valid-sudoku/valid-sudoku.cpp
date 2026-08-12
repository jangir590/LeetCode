class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    char c = board[i][j];
                    board[i][j]='.';

                    for(int k=0 ;k<9 ;k++){
                        if(board[k][j]==c)return false;
                        if(board[i][k]==c)return false;
                        if(board[3*(i/3)+ k/3][3*(j/3)+ k%3]==c)return false; 
                    }
                    board[i][j]=c;
                }
                
            }
        }
        return true;
        
        
    }

  
};