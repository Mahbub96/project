#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int main(){
    int n;
    cout<<"Enter Total Nodes : ";
    cin>>n;
    vector<vector<int> > v(n);
    for(int i = 0; i < n; i++){
        int neighbor;
        cout<<"Enter Total Neighbor of node "<<i<<" : ";
        cin>>neighbor;
        if(neighbor) cout<<"\nEnter Neighbor of node "<<i<<" : ";
        for(int j = 0; j < neighbor;j++){
            int temp;
            cin>>temp;
            v[i].push_back(temp);
        }
    }
    //BFS using vector and queue
    queue<int> q;
    int x,s;
    cout<<"\nEnter BFS starting node : ";
    cin>>s;
    q.push(s);
    cout<<"\nVisited node : ";
    while(q.size()){
        x = q.front();
        cout<<" "<<x;
        q.pop();
        for(int i = 0; i < v[x].size();i++){
            q.push(v[x][i]);
        }
    }
    return 0;
}
