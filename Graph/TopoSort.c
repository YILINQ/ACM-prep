#include<iostream>
#include<stdlib.h>
#include<cmath.h>

// This is a different implementation of topo-sort than in our tut
// I augment each node a new field: in_degree, which records the number
// of edge that goes into that node.
// ASSume that graph has no cycle.
// Basic idea is that if the graph has no cycle, then there must be at least one node whose in_degree is 0, I call them 0-node.
// Randomly choose one node from 0-node, then trace all the edges E that start from that node.
// Decrement the in_degree of that node at the end of E, if its in_degree becomes 0, add that node to 0_degree.
// Repeat until all the nodes have been moved in 0_degree.
// The 0-degree is the sorted in the topological order.


// Assume |E| = M, |V| = N
using namespace std;
int NUM_NODES = 1000;
int final_sequence[1001];

struct Node{
  int key;
  int in_degree;
}

struct Edge{
  struct Node begin;
  struct Node end;
}

int v[1001]; // array of nodes
int e[100001]; //array of edges
int 0_degree[1001]; // array of 0_degree nodes
void init_graph(v, e){
  // init the graph
  // modify field: in_degree
  // cost M
  for (int i = 0; i < 100001; i ++){
    if (e[i] != NULL){
      e[i].end.in_degree ++;
    }
  }
  for (int j = 0; j < 1001; j++){
    if (v[j].in_degree == 0){
      //add v[j] to 0_degree;
      // cost N
    }
  }
}

void topoSort(v, e, 0_degree){
  for(int i = 0; i < 1001; i++){
    if (0_degree[i] != NULL){
      // Find all edges start from it
      // Could be better if stored at init procedure
      // TODO improve this.
      for(int j = 0; j < 100001; j++){
        if (e[j].begin == 0_degree[i]){
          e[j].end.in_degree --;
          if (e[j].end.in_degree == 0){
            //add e[j].end to 0_degree;
          }
        }
      }
    }
  // This looks stupid since it cost NM in total......
  // Need to find a better improvement
  // Now the 0_degree represents the order we want.
  }
}
