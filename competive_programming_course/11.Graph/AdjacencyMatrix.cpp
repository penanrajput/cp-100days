#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V; // nodes number 0, 1, 2, 3, ...., n-1
    list<int> *l;

public:
    Graph(int n)
    {
        V = n;
        l = new list<int>[V];
    }
    void addEdge(int u, int v, bool bidir = true)
    {
        l[u].push_back(v);
        if (bidir)
            l[v].push_back(u);
    }

    void printList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " -> ";
            for (int vertex : l[i])
                cout << vertex << ", ";
            cout << endl;
        }
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(2, 1);
    g.addEdge(5, 4);

    g.printList();
}
