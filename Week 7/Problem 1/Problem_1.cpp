// akshay went friends party. print shortest path from friends to akshays house
#include <bits/stdc++.h>
using namespace std;
void par(vector<int> &pnode, int u)
{
    cout << u + 1 << " ";
    if (pnode[u] >= 0)
        par(pnode, pnode[u]);
}
void djikstra(int **graph, int m, int source)
{
    vector<int> pnode(m, -1), weigh(m, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> myh;
    weigh[source] = 0;
    myh.push(make_pair(weigh[source], source));
    while (!myh.empty())
    {
        int u = myh.top().second;
        myh.pop();
        for (int i = 0; i < m; i++)
        {
            if (graph[u][i] != 0)
            {
                if (weigh[i] > weigh[u] + graph[u][i])
                {

                    weigh[i] = weigh[u] + graph[u][i];
                    myh.push(make_pair(weigh[i], i));
                    pnode[i] = u;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        par(pnode, i);
        if (weigh[i] == INT_MAX)
            cout << ": INFINITE" << endl;
        else
            cout << ": " << weigh[i] << endl;
    }
}

int main()
{
    int m, source;
    cin >> m;
    int **graph = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        graph[i] = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }
    cin >> source; //entering source from user from where we need to calc path to all other locations
    djikstra(graph, m, source - 1);
}