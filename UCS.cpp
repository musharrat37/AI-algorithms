#include<iostream>
#include<queue>
#include<array>
using namespace std;

//#define size 20
int graph[][6]={{0,5,1,0,0,0},
                {0,0,0,0,2,0},
                {0,0,0,3,0,0},
                {0,4,0,0,7,0},
                {0,0,1,0,0,1},
                {0,5,0,0,0,0}};
//int input[][3] = {{0,1,5},{0,2,1},{1,4,2},{2,3,3},{3,1,4},{3,4,7},{4,2,1},{4,5,1}};
//array<int,size> node; 
array<int,6> explored; 
priority_queue <int> frontier;
int n=0, cost=0;


int UCS(int root, int goal)
{
    int node=root;
    /*frontier.push(node);
    
    if(frontier.empty())
    {
        cout << "\nFailure"<<endl;
        return 0;
    }
    node = frontier.pop;
    */
    if(node==goal)
    {
        cout << "Solution found"<<endl;
        return cost;
    }
    explored[n]=node;
    for(int i=0; i<6; i++)
    {
        if(graph[node][i]!=0)
        {
            for(int e=0; e<explored.size; e++)
            {
                if(explored[e]==i)
                {
                     cost += graph[node][i];
                     UCS(i,goal);
                }
            }
        }
    }
}
int main()
{
    explored.fill(0);

    getchar();getchar();
}