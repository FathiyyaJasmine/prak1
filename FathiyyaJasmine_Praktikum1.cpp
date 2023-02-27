#include <iostream>
#include <cmath>
using namespace std;

double LuasLingkaran (double r){
	//double pi = M_PI;
	return M_PI*r*r;	
}
int main (){
	double r;
	cin>>r;
	cout<<"Luas Lingkaran : "<< LuasLingkaran(r);
	return 0;
	
}
