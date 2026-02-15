
// replaceall.cpp


#include<iostream>
using namespace std;


int main(){
	char num[15];
	cin.getline(num,15);
	int i =0;
	while(num[i] != '\0'){
		if(num[i] == '0'){
			num[i] = '5';
		}
		i++;
	}
	
	cout<<num<<endl;


	return 0;

}
