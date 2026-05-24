#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=1000;



int main(int argc, char** argv) {
	ifstream we("C:/cpp/punkty.txt");
	int i=0, licznik_a=0, licznik_b=0, licznik_c=0;
	int X[n], Y[n];	
	
	for(i=0; i<n; i++){
		we>>X[i]>>Y[i];
	}
	
	for(i=0; i<n; i++){
		if(X[i]<5000 && Y[i]<5000)
			licznik_a++;
		if(X[i]==5000 || Y[i]==5000)
			licznik_b++;
		if(X[i]>5000 || Y[i]>5000)
			licznik_c++;
	}
	
	cout<<"Odp:"<<endl<<"a) "<<licznik_a<<endl;
	cout<<"b) "<<licznik_b<<endl;
	cout<<"c) "<<licznik_c;
	
	
	return 0;
}
