int maxi = arr[0];

for(int i = 1; i < n; i++) {
    maxi = max(maxi, arr[i]);
}

cout << maxi;