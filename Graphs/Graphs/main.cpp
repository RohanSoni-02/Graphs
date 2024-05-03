//
//  main.cpp
//  Graphs
//
//  Created by Rohan Soni on 1/4/2024.
//

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Graph{
private:
    unordered_map<string, unordered_set<string>> adjList;
public:
    bool addVertex(string vertex){
        if(adjList.count(vertex) == 0){
            adjList[vertex];
            return true;
        }
        return false;
    }
    
    void printGraph(){
        for(auto [vertex,edges]: adjList){
            cout<< vertex << ": [ ";
            for (auto edge: edges){
                cout<< edge << " ";
            }
            cout<< "]" <<endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    Graph* myGraph = new Graph();
    myGraph->addVertex("A");
    myGraph->printGraph();
}
