int target;
cin >> target;

int low = 0, high = n - 1;

while(low <= high) {
    int mid = low + (high - low) / 2;

    if(arr[mid] == target) {
        cout << "Found";
        return 0;
    }
    else if(arr[mid] < target) {
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
}

cout << "Not Found";