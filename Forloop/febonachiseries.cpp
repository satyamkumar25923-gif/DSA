#include <iostream>
using namespace std;
int main() {
    int n,i ;
  cout<<"type a number ";
  cin>>n;
   int a = 0 ; 
   int b =  1 ;
  for(i=1 ; i<=n ; i++){
     int next = a + b ;
     a = b ;
     b = next ;
      
     cout<< next << "\n" ;
    
  }

}