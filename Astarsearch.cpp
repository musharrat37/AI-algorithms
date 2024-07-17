#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> graph;
map<pair<int,int>, int> cost;

vector<int> heuristic;


int AStarSearch(int start, int goal)
{
    vector<int> closedSet,gScore,fScore;
    
    gScore[start]=0;
    fScore[start]=gScore[start]+heuristic[start];
    priority_queue<pair<int, int> > openSet;
    map<int,int> cameFrom;
    openSet.push(make_pair(fScore[start],start));

    while(!openSet.empty())
    {
        pair<int,int> current=openSet.top();
        if(current.second==goal)
        {
            cout << "\nPath found"<<endl;
            return 0;
        }
         openSet.pop();
         closedSet.push_back(current);
    }

   



    //push start node into q after calculating fx
    //store it somewhere and pop it

    //find adjacent nodes of q
    //calculate fx for all adjacent nodes and put them in queue

}

int main()
{
    graph.resize(7);

    graph[0].push_back(1);
    graph[1].push_back(0);
    graph[1].push_back(2);
    graph[2].push_back(1);
    graph[2].push_back(3);
    graph[3].push_back(2);
    graph[3].push_back(6);
    graph[6].push_back(3);
    graph[0].push_back(4);
    graph[4].push_back(0);
    graph[4].push_back(5);
    graph[5].push_back(4);
    graph[5].push_back(6);
    graph[6].push_back(5);

    cost[make_pair(0,1)]=1;
    cost[make_pair(1,0)]=1;
    cost[make_pair(0,4)]=2;
    cost[make_pair(4,0)]=2;
    cost[make_pair(1,2)]=2;
    cost[make_pair(2,1)]=2;
    cost[make_pair(2,3)]=3;
    cost[make_pair(3,2)]=3;
    cost[make_pair(3,6)]=4;
    cost[make_pair(6,3)]=4;
    cost[make_pair(4,5)]=3;
    cost[make_pair(5,4)]=3;
    cost[make_pair(5,6)]=2;
    cost[make_pair(6,5)]=2;

    heuristic[0]=1;
    heuristic[1]=4;
    heuristic[2]=2;
    heuristic[3]=4;
    heuristic[4]=4;
    heuristic[5]=2;
    heuristic[6]=0;

    AStarSearch(0,6);

    getchar();getchar();
    return 0;
}

