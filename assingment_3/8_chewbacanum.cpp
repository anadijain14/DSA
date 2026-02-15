// chewbacca.cpp

#include<iostream>
using namespace std;

int main(){
	string arr;
	cin>>arr;
	unsigned long long ans =0;

	int i =0;
	while(arr[i] != '\0'){
		
		if(arr[i] == '9' && i ==0){
				i++;
				continue;
		}else if( arr[i] >= '5' ){			//compares with ascii			
			arr[i] = '9' +'0' - arr[i];		//this subtracts from the ascii of 9 and then add ascii of 0
											//this way number stays in the range of 0 to 9
		}
		i++;
	}

	cout<<arr<<endl;
	return 0;

}