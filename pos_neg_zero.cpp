#include <iostream>
using namespace std; 
int main() {
int a ;
 cout << "enter the value of a" << "\n";
 cin >> a;
 if(a > 0){
     cout << " value is positve";
 }
 else if(a < 0){
     cout << "value is negative" << "\n";
 }
else{
    cout << "value is zero" << "\n";
}
    return 0;
}