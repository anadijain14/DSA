#include <iostream>
using namespace std;
int reverse(int n){
    int rev = 0;
    while (n!=0){
        int k =n%10;
        rev = rev*10+k;
        n=n/10;
    }
    return rev;

 }
int len (int n){
    int ans =0;
    while (n!=0){
        ans++;
        n=n/10;
    }   
    return ans;

}
int main(){
    int n;
    cin>>n;
    int rev = 1;
    int l=len(n);
    while (n!=0){
        int k = n%10;
        if (l==1 and k ==9){
            rev =rev*10+k;
            l++;
        }
        if (inv < k){
            rev = rev*10+inv;
            l--;

        }
        else{
            rev = rev*10+k;
            l--;
        }
        n=n/10; 

        
    
    }
    

 


    
 {}