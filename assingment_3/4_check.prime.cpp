#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int flag = 0;

	for(int i =2; i <= sqrt(n); i++){
		if(n % i ==0){
			flag ++;
		}
	}

	if( flag < 2)
	cout<<"Prime"<<endl;
	else
	cout<<"Not Prime"<<endl;
	return 0;
}