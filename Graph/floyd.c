// Find shortest path
// Floyd
// idea: DP
// O(n^3)

#include<iostream>
#include<stdio.h>
#include<string.h>
//#define size 100

// suppose we have a graph G(V, E),|V| = n and |E| = m, and we have a 2-d array d[u][v], which represents the distance from u to v.
// if unweighted, distance means the number of edges from u to v.
// if weighted, distance means the sum of the weight from u to v.
// Here we consider the weighted graph, otherwise it can be done in BFS.
// Use w[u][v] to represent the weight from u to v.

int main(){
	// init the graph.
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if (i, j) in E:
				d[i][j] = w[u][v];
			else{
				d[i][j] = MAX_INT;
			}
		}
	}

	// Floyd
	for(int k = 0; k < n; k++){
	// k for the internal vertex
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if (d[i][k] + d[k][j] < d[i][j]){
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}

	
	return 0;
}


