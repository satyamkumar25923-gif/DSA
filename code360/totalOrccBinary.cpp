#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1,3,3,3,3,5};
    int target;

    cout << "Enter no.: ";
    cin >> target;

    int size = sizeof(arr) / sizeof(int);

    // First occurrence
    int start = 0;
    int end = size - 1;
    int store = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            store = mid;
            end = mid - 1;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "First Position = " << store << endl;

    // Last occurrence
    start = 0;
    end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Last Position = " << ans << endl;
    
    cout << "Total Occurrence = " << ans - store + 1 << endl;

    return 0;
}
