int target;
cin >> target;

for(int i = 0; i < n; i++) {
    if(arr[i] == target) {
        cout << "Found at index " << i;
        return 0;
    }
}

cout << "Not Found";