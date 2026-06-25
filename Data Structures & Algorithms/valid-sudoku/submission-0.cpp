class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row;
        for(int i=0;i<9;i++)
        {
            unordered_set<char> seen;
            for(int j=0;j<9;j++)
            {
                 if(board[i][j]=='.')
                {
                    continue;
                }
                if(seen.find(board[i][j])!=seen.end())
                {
                    return false;
                }
                seen.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++)
        {
            unordered_set<char> seen;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')
                {
                    continue;
                }
                if(seen.find(board[j][i])!=seen.end())
                {
                    return false;
                }
                seen.insert(board[j][i]);
            }
        }
        for(int s=0;s<9;s++)
        {
            unordered_set<char> sa;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    int rows=(s/3)*3+i;
                    int col=(s%3)*3+j;
                    if(board[rows][col]=='.')
                    {
                        continue;
                    }
                    if(sa.find(board[rows][col])!=sa.end())
                    {
                        return false;
                    }
                    sa.insert(board[rows][col]);
                }
            }
        }
        return true;
    }
};