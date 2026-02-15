#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int oddsum=0, evensum = 0;
	int pos =0;
	while(n != 0){
		pos++;

		if(pos %2 ==0){
			evensum += n%10;
		}else{
			oddsum += n%10;
		}
		n /=10;
	}

	cout<<oddsum<<endl;
	cout<<evensum<<endl;


	return 0;

}