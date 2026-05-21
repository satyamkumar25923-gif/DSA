#include <iostream>
using namespace std; 
int main(){
int n ; 
int i = 2 ;
cout << "enter a number : ";
cin >> n ;
while(i<n){
    cout << "prime" << "\n";
    break; 
    if(n%i==0){
        cout << "not prime" << "\n";
    }
    else{
        i++;
    }
}
    return 0;
}