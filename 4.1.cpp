#include <iostream>
#include <fstream>

using namespace std;

int const n=1000;

bool czy_pierwsza(int a){
	if(a<2) return false;
	int i=2;
	for(i=2; i*i<=a; i++){
		if(a%i==0) return false;
	}
	
	return true;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/punkty.txt");
	int i=0, licznik=0;
	int X[n], Y[n];	
	
	for(i=0; i<n; i++){
		we>>X[i]>>Y[i];
		if(czy_pierwsza(X[i]) && czy_pierwsza(Y[i]))
			licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
