#include <iostream>
using namespace std; 
int main(){
int n ;
int i = 2 ;
int sum = 0 ; 
cout << "enter a number : ";
cin >> n ;
while(i<=n){
    sum = sum + i ;
    i = i + 2 ;
}
 cout << sum << "\n";
    return 0;
}