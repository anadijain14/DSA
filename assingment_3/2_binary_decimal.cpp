// binarytodecimal.cpp

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int bn;
	cin>>bn;
	int dec =0;
	int g = 0;
	while(bn != 0){
		int ldig = bn % 10;
		dec = dec + ldig*pow(2,g);
		g++;
		bn /= 10;
	}

	cout<<dec;
	return 0;
}