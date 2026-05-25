class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        //for row check

        for(int i =0;i<9;i++){
            set<char>s;

            for(int  j=0;j<9;j++){
                if(s.count(board[i][j])) return  false;

         if(board[i][j]!='.')s.insert(board[i][j]);

            }


        }

        //for column  check 

        for(int c=0;c<9;c++){

set<char>s;


for(int r=0;r<9;r++){


if(s.count(board[r][c]))return false;
    
    if((board[r][c])!='.')s.insert(board[r][c]);

    
}



        }


//vector<vector<int>>res;
for (int sq=0;sq<9;sq++){

set<char>s;
    for(int i =0;i<3;i++){


for(int  j=0;j<3;j++){

int r=(sq/3)*3+i;
int c=(sq%3)*3+j;

if(s.count(board[r][c])) return  false;
if(board[r][c]!='.')s.insert(board[r][c]);


    

}


    }


}
        
    return true;
    }

};
