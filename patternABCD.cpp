#include <iostream>
using namespace std; 
int main(){
int n ; 
int i = 1;
int j =1 ;
cout  << "enter a number : " ;
cin >> n ;
  
while(i<=n){
    int c = 1;
    int j = 1;
    while(j<=n){
        char ch = 'A'+ c -1 ;
        cout << ch ;
        j++;
        c++ ;

    }
    cout << "\n";
    i++;
}

    return 0;
}