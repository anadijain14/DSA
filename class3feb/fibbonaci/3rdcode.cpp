#include <iostream>
using namespace std;
int fibbo(int n){
    ///base case
    if (n==0 or n==1){
        return n;

    }
    //recursion
    return fibbo (n-1)+fibbo (n-2);

}
int main(){
    int n ;
    cin>>n;
    int g=0;
    for(int i =1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<fibbo(g)<<"  ";
            g++;
        }
        cout<<endl;
}
    return 0;

}
