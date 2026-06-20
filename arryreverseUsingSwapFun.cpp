#include<iostream>
#include<utility>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int size = sizeof(arr)/sizeof(int);
int st = 0 ;
int ed = size-1 ;
while(st<ed){
swap(arr[st] , arr[ed]);
st++;
ed++;
}
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
return 0;
}
