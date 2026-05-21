#include <iostream>
using namespace std; 
int main(){
 int n ;
 int i = 1 ;
 int sum = 0 ;
 cout << "enter a number " << "\n";
 cin >> n;
 while(i<=n){
     sum = sum + i ;
     i++;
 }
 cout << sum << "\n";

    return 0;
}