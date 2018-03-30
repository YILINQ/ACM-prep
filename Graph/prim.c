#include<stdlib.h>
#include<iostream>
// fake include below
// just to show the data structure we need to use
#include "graph.h"
#include "linkedlist.h"
#include "set.h"
// fake include end.
#include<cmath.h>

using namespace std;

void prim(struct graph G){
    set nodes_set = empty_set();
    set mst_edges = empty_set();
    int random_start = random(1, sizeof(G.V));
    struct node start = G.V[random_start];
    nodes_set.add(start);
    int min_index;
    int end_and_new_start;
    while(nodes_set.size() < G.V.size() - 1){ // minus 1 matters!
      for(int index = 0; index < G.E.size(); index++){
        if (G.E.getindex(index).start == start){
          end_and_new_start = G.E.getindex(index).end;
          if (G.E.getindex(index).cost < min){
            min = G.E.getindex(index).cost;
            min_index = index;
          }
        }
      }
      mst_edges.add(G.E.getindex(index));
      start = end_and_new_start;
    }

    // mst_edges contains all edges we want in the MST.
}
