#include<stdio.h>
#define max 1000

int fa[max],rank[max];

void make(int x){
   fa[x]=x;
   rank[x]=0;
   }
   
int find(int x){
   if(fa[x]!=x) fa[x]=find([fa[x]);
   return fa[x];
   }
   
void uni(int x,int y){
   x=find(x);
   y=find(y);
   if(x==y) return;
   if(rank[x]>rank[y])  fa[y]=x;
   else {
      if(rank[y]==rank[x]) rank[y]++;
	  fa[x]=y;
	  }
   
   }
