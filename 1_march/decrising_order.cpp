#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    sort(arr, arr + n, greater<int>());

    cout << "Sorted array (Descending): ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}