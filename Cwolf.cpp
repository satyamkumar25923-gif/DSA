#include<iostream>
using namespace std ;
int main(){
  int arr[5]={5,4,1,2,3};
  int s = 0 ; 
  int size = sizeof(arr) / sizeof(int);
  int end  = size - 1 ; 
  while{s>=e}{
    int mid = s + (e-s) / 2 ;
    if(arr[mid] > arr[0]){
      s = mid + 1 ;
    }
    else{
    e = mid ; 
    }
      
  }
  cout << e ; 
}
