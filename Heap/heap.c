#include<stdio.h>
#include<iostream>

using namespace std;
#define MAXSIZE = 1001;
int heap_array[MAXSIZE];
int k; // represent the current number of elements in heap.
int heap_sort_array[MAXSIZE];

int min(int x, int y){
	if(x < y) return x;
	else return y;	
}

void swap(int *x, int *y){
	int* t;
	t = x;
	x = y;
	y = t;
}	

void up_swap(int *x){
	int *t;
	if(*x == 1 return;
	if(h[x] >= h[x//2]) return;
	//init two pointers to x and x//2
	swap(&x, &x//2);
	up_swap(&x//2);
	down_swap(&x);
}

void down_swap(int *x){
	int t, s;
	if (x >= k) return;
	s = min(a[x*2], a[x*2] + 1);
	if(a[x] > s){
		if (a[x*2] < a[x*2+1]){
			swap(&x, &x*2);
			down_swap(&x*2);
			up_swap(&x);
		}
		else{
			swap(&x, &x*2+1);
			down_swap(&x*2+1);
			up_swap(&x);
		}
	}	
}

void insert(int x){
	k++;
	heap_array[k] = x;
	up_swap(&k);
}

void delete(int x){
	swap(&x, &heap_array[k]);
	k--;
	down_swap(&x);
	up_swap(&x);
}

int extract_max(int heap_array[]){
	int temp = heap_array[1]; // max
	swap(&heap_array[1], &heap_array[k]);
	delete(&heap_array[k]);
	down_swap(&heap_array[1]);
	
	return temp;
}


void heap_sort(){ // global ops, no param.
	int i = 0;
	while(i <= k ){
		heap_sort_array[i] = extract_max(heap_array);
	}
	heap_array = heap_sort_array;
}
