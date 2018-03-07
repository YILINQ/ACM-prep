#inlucde<stdio.h>
#include<iostream>

using namespace std;

#define MAXSIZE_NODE = 100000;
#define MAXSIZE_EDGE = 1000;
Queue Q;
V[MAXSIZE_NODE];
E[MAXSIZE_EDGE];

struct Graph{
	int V[MAXSIZE_NODE];
	int E[MAXSIZE_EDGE];
	visited[MAXSIZE_NODE];
}


void BFS(struct Graph G, s){
	Q.ENQ(s);
	G.visited[s] = 1; // it has been visited
	while (!Q.isEmpty()){
		for each t that (s, t) in E:
			if (visited[t] == 0){
				visited[t] = 1;
				Q.ENQ(t);
				// Do something here
				// Use the info in that node
			}		
		Q.DEQ(s); //finished visiting s
	}
}
