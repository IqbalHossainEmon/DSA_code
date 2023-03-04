#include <stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1, g[20], gIndex = 0;

void bfs(int v)
{
    visited[v] = 1;
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
        if (visited[v] != 0)
            g[gIndex] = v;
        gIndex++;
        // visited[q[f]] = 1;
        bfs(q[f++]);
    }
}

void main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }

    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter the starting vertex:");
    scanf("%d", &v);
    bfs(v);
    printf("\n BFS :\n");

    for (i = 0; i < gIndex; i++)
    {
        printf("%d  ", g[i]);
    }
}