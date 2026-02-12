#include <iostream>
using namespace std;
int main(){

    int n ;
    cin >>n;
    int i=1;
    //row ke liye hai 
    while(i<=n){
        //coloum ke liye hai 
        int j=1;
        while(j<=n){
            cout<<i;
           j=j+1;
        }
        cout<<endl;
        // line ek ke baad aage baddhe isliye +1 lgta hai 
       i= i+1;
    }     

}