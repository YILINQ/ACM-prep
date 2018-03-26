#include<stdlib.h>
#include<math.h>

using namespace std;

int pow(int a, int b){
	int r = 1;
	int base = a;
	while(b){
		if(b & 1){
			r = r * base;
		}
		base = base * base;
	}
	return r;
}
