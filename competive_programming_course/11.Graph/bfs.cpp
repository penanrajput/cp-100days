#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> adjList;

public:
    Graph() {}
    void addEdge(T u, T v, bool bidir = true)
    {
        adjList[u].push_back(v);
        if (bidir)
            adjList[v].push_back(u);
    }

    void print()
    {
        for (auto key : adjList)
        {
            cout << key.first << " -> ";
            for (T vertex : key.second)
                cout << vertex << ", ";
            cout << endl;
        }
    }

    void bfs(T start)
    {
        map<T, bool> visited;
        // for (int i = 0; i < m.size(); i++)
        //     visited[i] = false;

        queue<T> q;    // declare empty queue
        q.push(start); // insert first element
        visited[start] = true;
        while (!q.empty())
        {
            T node = q.front();     // get front of queue
            cout << node << " -> "; // printing the element of q
            q.pop();                // pop the element

            list<T> neighbours = adjList[node];
            for (T neighbour : neighbours)
            {
                if (visited[neighbour] == false)
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        cout << "end" << endl;
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(4, 3);
    // g.print();
    g.bfs(0);
    // g.print();
}
