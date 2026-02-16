#include<iostream>
using namespace std;

int countDig(int num, int ele){
	int count= 0;

	while(num != 0){

		if(num %10 == ele){
			count++;
		}
		num /=10;
	}
	return count;
}

int main(){
	int n, ele;
	cin>>n;
	cin>>ele;
	int total;
	total = countDig(n , ele);
	
	cout<<total<<endl;


	return 0;

}