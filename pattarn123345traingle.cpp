#include <iostream>
using namespace std; 
int main(){
int n ; 
int i = 1;
int j =1 ;
cout  << "enter a number : " ;
cin >> n ;
//int c = i;
while(i<=n){
    int c = i;
    int j = 1;
    while(j<=i){
        cout << c;
        j++;
        c++;
    }
    cout << "\n";
    i++;
}

    return 0;
}




#include <iostream>
using namespace std; 
int main(){
int n ; 
int i = 1;
int j =1 ;
cout  << "enter a number : " ;
cin >> n ;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout << ( i+j )-1;
        j++;
    }
    cout << "\n";
    i++;
}

    return 0;
}