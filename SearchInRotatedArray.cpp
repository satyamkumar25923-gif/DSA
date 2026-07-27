#include <iostream>
using namespace std;

int getpivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {  
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
    }
    return s;
}

int main() {
    int arr[5] = {7, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    int pvt = getpivot(arr, size);

    int target;
    cout << "Enter: ";
    cin >> target;

    int s, e;
    if (target >= arr[pvt] && target <= arr[size - 1]) {
        s = pvt;
        e = size - 1;
    }
    else {
        s = 0;
        e = pvt - 1;
    }

    while (s <= e) {   
        int m = s + (e - s) / 2;

        if (arr[m] == target) {
            cout << "Found at index " << m << endl;
            return 0;
        }
        else if (target > arr[m]) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }

    cout << "Not Found";

    return 0;
}
