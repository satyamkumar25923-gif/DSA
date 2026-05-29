#include <iostream>
using namespace std; 
int main(){
int m ; 
int i = 1;
cout  << "enter a number : " ;
cin >> m ;
while(i<=m){
    int j = 1;
    while(j<=m){
        cout << j;
        j++;
    }
    cout << "\n";
    i++;
}

    return 0;
}
