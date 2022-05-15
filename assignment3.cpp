#include <bits/stdc++.h>
using namespace std;
void swap1(int *x , int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
vector<int> selectionsort(vector<int>&v , int n){
    int i , j , minind;
    for(int i=0;i<n-1;i++){
        minind=i;
        for(int j=i+1;j<n;j++){
            if(v[minind]>v[j]){
                minind=j;
            }
        }
        swap1(&v[minind],&v[i]);
    }

    return v;
}

void prims(){
    int N=5,m=6;
	vector<pair<int,int> > adj[N]; 


	adj[0].push_back({1,2});
	adj[0].push_back({3,6});
	adj[1].push_back({0,2});
	adj[1].push_back({2,3});
	adj[1].push_back({3,8});
	adj[1].push_back({4,5});
	adj[2].push_back({1,3});
	adj[2].push_back({4,7});
	adj[3].push_back({0,6});
	adj[3].push_back({1,8});
	adj[4].push_back({1,5});
	adj[4].push_back({2,7});
	
    int parent[N];
    int key[N]; 
    bool mstSet[N]; 
  
    for (int i = 0; i < N; i++) 
        key[i] = INT_MAX, mstSet[i] = false; 
    key[0] = 0; 
    parent[0] = -1; 
    int ansWeight = 0;
    for (int count = 0; count < N - 1; count++)
    { 
        
        int mini = INT_MAX, u; 
  
        for (int v = 0; v < N; v++) 
{
            if (mstSet[v] == false && key[v] < mini) 
                mini = key[v], u = v; 
}
                 mstSet[u] = true; 
        
        for (auto it : adj[u]) {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v]) 
                parent[v] = u, key[v] = weight; 
        }
            
    } 
    
    
    for (int i = 1; i < N; i++) 
        cout << parent[i] << " - " << i <<" \n"; 
	//return 0;

}

void prims1(){
    int n, m;
    n=5,m=6;
    vector<pair<int,int>>adj[n];
    	adj[0].push_back({1,2});
	adj[0].push_back({3,6});
	adj[1].push_back({0,2});
	adj[1].push_back({2,3});
	adj[1].push_back({3,8});
	adj[1].push_back({4,5});
	adj[2].push_back({1,3});
	adj[2].push_back({4,7});
	adj[3].push_back({0,6});
	adj[3].push_back({1,8});
	adj[4].push_back({1,5});
	adj[4].push_back({2,7});

    int parent[n];
    int key[n];
    bool mst[n];
    for(int i=0;i<n;i++){
        parent[i]=-1;
        key[i]=INT_MAX;
        mst[i]=false;
    }
    key[0]=0;
    for(int cnt=0;cnt<n-1;cnt++){

        int mini=INT_MAX,u;
        for(int v=0;v<n;v++){
            if(mst[v]==false && key[v]<mini){
                mini=key[v];
                u=v;
                mst[v]=true;
            }
        }

        for(auto i:adj[u]){
            int v = i.first;
            int w = i.second;
            if(mst[v]==false && w<key[v]){
                key[v]=w;
                parent[v]=u;
            }
        }
    }
    for(int i=1;i<n;i++){
        cout<<parent[i]<<"->"<<i<<endl;
    }
    


}
int main(){


    // vector<int>v;
    // int n ;
    // cin>> n;

    // for(int i=0;i<n;i++){
    //     int val;
    //     cin >> val;
    //     v.push_back(val);
    // }

    // vector<int>vec=selectionsort(v,n);

    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    prims1();


}