#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=1000;

int odl(int xa, int ya, int xb, int yb){
	float pom1=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
	if(pom1-pom1/1>0.5)
		return pom1/1+1;
	else
		return pom1/1;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/punkty.txt");
	int i=0, j=0, najdl=0, x1n=0, y1n=0, x2n=0, y2n=0;
	int X[n], Y[n];	
	
	for(i=0; i<n; i++){
		we>>X[i]>>Y[i];
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(odl(X[i],Y[i],X[j],Y[j])>najdl){
				najdl=odl(X[i],Y[i],X[j],Y[j]);
				x1n=X[i];
				y1n=Y[i];
				x2n=X[j];
				y2n=Y[j];
			}
				
		}
	}
	
	cout<<"P1: "<<x1n<<" "<<y1n<<endl;
	cout<<"P2: "<<x2n<<" "<<y2n<<endl;
	cout<<"Odleglosc miedzy nimi to "<<najdl;
	
	return 0;
}
