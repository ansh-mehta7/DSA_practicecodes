#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// class Graph{
//     public:
//     unordered_map<int ,list<int>>adjList;
     

//     void printAdjList(){
//         for (auto i: adjList){
//             cout<<i.first<<" ->{";
//             for (auto neighbour :i.second){
//                 cout<<neighbour<<",";

//             }
//             cout<<"}"<<endl;
//         }

//     }
   // direction flag =0 undirected edge 
   // direction flag =1 directed edge 

//     void addEdge(int u, int v,bool direction ){
//         if (direction ==1){
             // u to v is an edge u se v ki taraf 
             // u->v
//             adjList[u].push_back(v);

//         }
//         else{
//             adjList[u].push_back(v);
//             adjList[v].push_back(u);
//         }


//     cout<<endl;
//     cout<<"printing adjecncy list "<<endl;
//     printAdjList();
//     }
// };


template<typename T>
class Graph{
    public:
    unordered_map<T,list<pair<T,int>>>adjList;
    void addEdge(T u ,T v, int wt, bool direction ){
        if (direction ==1){
            adjList[u].push_back({v,wt});


        }else{
            // dir =0 
            adjList[u].push_back({v,wt});
            adjList[v].push_back(make_pair(u,wt));

        }
        printAdjList();
        cout<<endl;

    }
    void printAdjList(){
        for (auto i:adjList){
            cout<<i.first<<" :{";
            for ( pair<T,int> j: i.second){
                cout<<"{"<<j.first<<","<<j.second<<"},";
            }
            cout<<"}"<<endl;
        }
    }
    void bfsTraversal( T src,  unordered_map<T,bool>&vis){
        // visited nodes
   
        // queue
        queue<T>q;
        q.push(src);
        vis[src]=true;

        while(!q.empty()){
            T frontNode=q.front();
            q.pop();
            cout<<frontNode<<" ";

            // go to neighbour 
            for (auto nbr: adjList[frontNode] ){
                T nbrNode=nbr.first;

                if (!vis[nbrNode]){
                      q.push(nbrNode);
                      vis[nbrNode]=true;
                }
            }
        }

    }
    void dfsTraversal(T src, unordered_map<T,bool>&vis){
         vis[src]=true;
         cout<<src<<" ";
         for (auto nbr:adjList[src]){
            T nbrNode=nbr.first;
            if (!vis[nbrNode]){
                dfsTraversal(nbrNode,vis);
            }
         }
    }

};
int main () {
    Graph<char>g;
    g.addEdge('a','b',5,1);
    g.addEdge('a','c',20,1);

    // g.addEdge('c','d',10,1);

    g.addEdge('c','e',50,1);
    g.addEdge('d','e',50,1);

    g.addEdge('e','f',50,1);
     unordered_map<char,bool>vis;
    g.dfsTraversal('a',vis);
    //  for (char node ='a';node<='f';node++){
    //     if(!vis[node]){
    //         g.bfsTraversal(node,vis);
    //     }
    //  }
    //  for (char node ='a';node<='f';node++){
    //     if(!vis[node]){
    //         g.dfsTraversal(node,vis);
    //     }
    //  }
    // g.bfsTraversal('a');
    // to traverse in case of a disconnected graph 
    
return 0;
  }

  //find out no of diconnected componets in a graph 