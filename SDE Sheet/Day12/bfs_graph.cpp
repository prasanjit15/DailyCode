#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> gh;
vector<bool> v;

void edge(int a, int b){
    gh[a].push_back(b);
}

void bfs(int s){
    queue<int> q;

    q.push(s);
    v[s] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();

        cout<<f<<" ";
        for(auto i = gh[f].begin(); i!= gh[f].end(); i++){
            if(!v[*i]){
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}

int main(){
    int num_vert;
    int edges;

    cout<<"Enter number of vertices and edges: ";
    cin>>num_vert>>edges;

    v.assign(num_vert, false);
    gh.assign(edges, vector<int>());

    int a;
    int b;
    for(int i = 0; i<edges;i++){
        cout<<"Enter the edges: ";
        cin>>a>>b;
        edge(a, b);        
    }

    bfs(2);

    return 0;
}