#include<iostream>
#include<stdlib.h>

using namespace std;

struct Tree{
	struct Lchild * Tree;
	struct Rchild * Tree;
	int size;
	int key;
}

int find(int k, struct Tree *t){
	if(t->Lchild->size< k-1){
		return find(k-t->size-1, t->Rchild);
	}
	if (t->Lchild->size==k-1){
		return t-key
	}
	if (t->Lchild->size > k-1){
		return find(k-1, t->Lchild);
	}
}


