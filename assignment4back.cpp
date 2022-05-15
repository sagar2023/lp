#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<string>&board,int row , int col , int n){

    int c = col;
    int r = row;
    c--;
    while(c>=0){
        if(board[r][c]=='Q'){
            return false;
        }
        c--;
    }

    r=row;
    c=col;
    r--;
    c--;

    while(r>=0 && c>=0){
        if(board[r][c]=='Q'){
            return false;
        }
        c--;
        r--;
    }

    r=row;
    c=col;
    r++;
    c--;

    while(r<n && c>=0){
        if(board[r][c]=='Q'){
            return false;
        }
        c--;
        r++;
    }

    return true;

}

void solve(vector<vector<string>>&ans, vector<string>&board, int col , int  n){

    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(board,row,col,n)){
            board[row][col]='Q';
            solve(ans,board,col+1,n);
        }
        board[row][col]='.';
    }

}

int main(){
    int n ;
    cout<<"enter no of col :";
    cin >> n;

    vector<string>board(n,string(n,'.'));
    vector<vector<string>>ans;
    solve(ans,board,0,n);
    cout<<"possible no of board :"<<ans.size()<<endl;
    for(auto & i:ans){
        for(auto & j:i){
            for(auto & k:j){
               
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}