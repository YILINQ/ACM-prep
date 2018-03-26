#include<stdlib.h>
#include<math.h>

using namespace std;

int gcd(int a, int b){
	if (a % b != 0){
		return gcd(b, a%b);
	}
	else{
		return b;
	}
}
