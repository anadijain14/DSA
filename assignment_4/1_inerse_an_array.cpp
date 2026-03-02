// #include<iostream>
// using namespace std;            
//     int main(){
//         int n;
//         cin>>n;
//         int arr[n];

//         int*inverse (int arr[] ,int n){}
//             int*inv = new int [n];

//             for(int i=0;i<n;i++){
//                 inv[arr[i]]=i;
//             }
//             return inv; 
//         }
//     }
#include <iostream>
using namespace std;

int* inverse(int arr[], int n) {
    int* inv = new int[n];

    for(int i = 0; i < n; i++) {
        inv[arr[i]] = i;
    }

    return inv;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* result = inverse(arr, n);

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    delete[] arr;
    delete[] result;

    return 0;
}