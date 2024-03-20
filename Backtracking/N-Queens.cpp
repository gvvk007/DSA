#include<iostream>
using namespace std;

void print(int n,int board[][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(int n,int board[][20],int i,int j){
    // Columns
    for(int k=0;k<i;k++){
        if(board[k][j]==1)
            return false;
    }

    int x=i;
    int y=j;
    //Left Diagonal
    while(i>=0 && j>=0){
        if(board[i][j]==1)
            return false;
        i--;
        j--;
    }
    //Right Diagonal
    while(x>=0 && y<=n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    return true;
}

bool nQueens(int n,int board[][20],int i){
    //Base Case
    if(i==n){
        print(n,board);
        return true;
    }

    for(int j=0;j<n;j++){
        if(canPlace(n,board,i,j)){
            board[i][j]=1;
            bool success=nQueens(n,board,i+1);
            if(success){
                return true;
            }
            //back track
            board[i][j]=0;
        }
    }
    return false;
}

int main(){
    int board[20][20]={0};
    int n;
    cin>>n;
    nQueens(n,board,0);
    return 0;
}