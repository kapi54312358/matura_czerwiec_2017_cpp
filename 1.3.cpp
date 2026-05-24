#include <iostream>

using namespace std;

bool l_kw(int n, int k){
	bool czyjest[n];
	int i=0, j=0;
	long long kw=0, poz=0;
	
	for(i=1; i<=n; i++){
		czyjest[i]=0;
	}
	
	j=1;
	
	while(j*j<n){
		j++;
	}
	
	for(i=2; i<=j; i++){
		kw=i*i;
		poz=kw;
		while(poz<=n){
			czyjest[poz]=1;
			poz+=kw;	
		}
	}
	
	
	return czyjest[k];
}

int main(int argc, char** argv) {
	cout<<l_kw(100,10);
	return 0;
}
