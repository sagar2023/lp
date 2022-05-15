#include <bits/stdc++.h>
using namespace std;
void bfs_rec(vector<int>vec[],vector<int>&visit,queue<int>q){

    if(q.empty()){
        return;
    }
    int ele=q.front();
    q.pop();
    cout<<ele<<" ";
    vector<int>a=vec[ele];
    for(int i=0;i<a.size();i++){
        if(!visit[a[i]]){
            visit[a[i]]=1;
            q.push(a[i]);
        }
    }
    bfs_rec(vec,visit,q);


}
void bfs(vector<int>vec[] , int n){

    vector<int>visit(n+1,0);
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            visit[i]=1;
            q.push(i);
            bfs_rec(vec,visit,q);
        }
    }

}

void dfs_rec(vector<int>vec[] ,vector<int>&visit,int n){

    vector<int>a=vec[n];
    cout<<n<<" ";
    for(int i=0;i<a.size();i++){
        if(visit[a[i]]==0){
            visit[a[i]]=1;
            dfs_rec(vec,visit,a[i]);
        }
    }

}

void dfs(vector<int>vec[],int n){

    vector<int>visit(n+1,0);
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            visit[i]=1;
            dfs_rec(vec,visit,i);
        }
    }
}
int main(){

    int n ;
    cout<<"enter totel no of vertices :";
    cin>> n;

    
    int e ;
    cout<<"enter totel no of edges :";
    cin>> e;

    vector<int>vec[n+1];
    for(int i=0;i<e;i++){
        int u;
        cout<<"enter starting point of edge: ";
        cin >> u;
         int v;
        cout<<"enter ending point of edge: ";
        cin >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);



    }

    for(int i=1;i<=n;i++){
        cout<<i<<"->";
        vector<int>a=vec[i];
        for(int j=0;j<a.size();j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    while(1){
         int opt;
        cout<<"Enter 1 : BFS Search     2 : DFS Search      -1: Exit   : ";
        cin>>opt;
        if(opt==1){
            bfs(vec,n);
        }
        else if(opt==2){
            dfs(vec,n);
        }
        else{
            break;
        }
        cout<<endl;
    }
    return 0;
}