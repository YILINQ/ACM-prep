#include<stdio.h>
#include<heap.c>
#include<DisjointSet.c>

# NUM_OF_EDGES 10001
int main(){
	// suppose we have initialized the set V and E
	BuildMinHeap(E);
	for(int num_of_sets = 0; num_of_sets < V.length; num_of_sets++){
		makeSet(V[num_of_sets]);
	}
	Node Vset[NUM_OF_EDGES];
	while (Vset.length < n - 1){
		u,v = ExtractMin(E);
		if Find(u) != Find(v):
			Vset <- Vset + {(u, v)};
			Union(Find(u), Find(v));
	}
	
	// finish MST
		
}
