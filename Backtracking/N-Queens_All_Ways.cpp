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

int nQueens(int n,int board[][20],int i){
    //Base Case
    if(i==n){
        //print(n,board);
        return 1;
    }
    int ways=0;
    for(int j=0;j<n;j++){
        if(canPlace(n,board,i,j)){
            board[i][j]=1;
            ways+=nQueens(n,board,i+1);
            //back track
            board[i][j]=0;
        }
    }
    return ways;
}

int main(){
    int board[20][20]={0};
    int n;
    cin>>n;
    cout<<nQueens(n,board,0)<<endl;
    return 0;
}