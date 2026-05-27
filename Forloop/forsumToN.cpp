#include <iostream>
using namespace std;
int main() {
    int n,i ;
  cout<<"type a number ";
  cin>>n;
  int sum = 0 ;
  for(i=1 ; i<=n ; i++){
      sum = sum + i ;
  }
  cout << sum << " \n";

    return 0;
}