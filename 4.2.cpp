#include <iostream>
#include <fstream>

using namespace std;

int const n=1000;

bool czy_cpodobne(int a, int b){
	int i=0, j=0, ka=a, kb=b;
	int cyfry_a[10], cyfry_b[10];
	bool flaga=0;
	
	for(i=0; i<10; i++){
		cyfry_a[i]=0;
		cyfry_b[i]=0;
	}		
	
	i=0;
	while(ka>0){
		cyfry_a[i]=ka%10;
		ka/=10;
		i++;
	}
	
	i=0;
	while(kb>0){
		cyfry_b[i]=kb%10;
		kb/=10;
		i++;
	}
	
	for(i=0; i<10; i++){
		flaga=0;
		for(j=0; j<10; j++){
			if(cyfry_a[i]==cyfry_b[j]) flaga=1;
		}
		if(!flaga)	return false;
	}
	
	for(i=0; i<10; i++){
		flaga=0;
		for(j=0; j<10; j++){
			if(cyfry_b[i]==cyfry_a[j]) flaga=1;
		}
		if(!flaga)	return false;
	}
	
	return true;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/punkty.txt");
	int i=0, licznik=0;
	int X[n], Y[n];	
	
	for(i=0; i<n; i++){
		we>>X[i]>>Y[i];
	}
	
	for(i=0; i<n; i++){
		if(czy_cpodobne(X[i], Y[i]))
			licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
