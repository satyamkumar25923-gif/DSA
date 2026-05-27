#include <iostream>
using namespace std;
int main() {
    int n,i ;
    bool isprime = 1;
  cout<<"type a number ";
  cin>>n;
 
  for(i=2 ;i<n; i++){
     if(n%i == 0 ){
        isprime = 0;
       break; 
        }
  }
  if(isprime == 0){
      cout << " not a prime no. ";
  }
  else{
      cout<< "prime no. ";
  }


    return 0;
}