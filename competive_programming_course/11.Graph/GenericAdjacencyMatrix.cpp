#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> m;

public:
    Graph() {}
    void addEdge(T u, T v, bool bidir = true)
    {
        m[u].push_back(v);
        if (bidir)
            m[v].push_back(u);
    }

    void print()
    {
        for (auto key : m)
        {
            cout << key.first << " -> ";
            for (T vertex : key.second)
                cout << vertex << ", ";
            cout << endl;
        }
    }
};

int main()
{
    Graph<string> g;
    g.addEdge("Putin", "Triump", false);
    g.addEdge("Putin", "Modi", false);
    g.addEdge("Putin", "Pope", false);
    g.addEdge("Modi", "Triump", true);
    g.addEdge("Modi", "Yogi", true);
    g.addEdge("Yogi", "Prabhu", false);
    g.addEdge("Prabhu", "Modi", false);

    g.print();
}
