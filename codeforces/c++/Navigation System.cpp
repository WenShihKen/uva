/*
    Author: Ken
    Problems: 1321D
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;
typedef long long int LL;

bool visit[200005] = {};
int dis[200005] = {}, path[200005] = {};
vector<vector<int>> graph;
vector<int> route;
int p, line;
void bfs(int rr)
{
    queue<int> q;
    q.push(rr);
    dis[rr] = 0;
    path[rr] = 1;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (auto next : graph[now])
        {
            if (dis[next] > dis[now] + 1)
            {
                path[next]++;
                dis[next] = dis[now] + 1;
                q.push(next);
            }
            else if (dis[next] == dis[now] + 1)
            {
                path[next]++;
            }
        }
    }
}
int main()
{
    fill(dis, dis + 200003, INT_MAX);
    cin >> p >> line;
    graph.resize(p + 1);
    for (int i = 0; i < line; i++)
    {
        int start, end;
        scanf("%d%d", &start, &end);
        graph[end].push_back(start);
    }
    int k;
    cin >> k;
    route.clear();
    for (int i = 0; i < k; i++)
    {
        int temp;
        scanf("%d", &temp);
        route.push_back(temp);
    }
    //////////////////// init
    bfs(route[k - 1]);
    ////////////////////
    int minb = 0, maxb = 0;
    for (int i = 1; i < k; i++)
    {
        int a = route[i], b = route[i - 1];
        if (dis[a] != dis[b] - 1)
        {
            minb++, maxb++;
        }
        else if (path[b] > 1)
            maxb++;
    }
    printf("%d %d\n", minb, maxb);
}
