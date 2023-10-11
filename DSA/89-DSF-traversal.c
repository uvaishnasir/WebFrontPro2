#include <stdio.h>
#include <stdlib.h>

// DFS Implementation

int visited[7] = {0, 0, 0, 0, 0, 0, 0};   // mark all as unvisited.
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};    //Adjacency matrix.

void DFS(int i)     //DFS function using stack.
{
    printf("%d ", i);   //starting source node.
    visited[i] = 1;     //mark as visited.
    for (int j = 0; j < 7; j++)   
    {
        if (a[i][j] == 1 && visited[j]==0)    //if edge found with unvisited node call DFS again.
        {
            DFS(j);
        }
    }
}

void main()
{
    DFS(4);     //you can start with any node
}