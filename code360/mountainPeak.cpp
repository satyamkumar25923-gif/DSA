#include <iostream>
using namespace std;

int main() {

    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(int);

    int start = 0;
    int end = size - 1;

    while(start < end){

        int mid = start + (end - start)/2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }

    cout << "Pivot Index = " << start << endl;
    cout << "Smallest Element = " << arr[start] << endl;
    cout << "Largest Element = " << arr[(start - 1 + size) % size] << endl;

    return 0;
}
