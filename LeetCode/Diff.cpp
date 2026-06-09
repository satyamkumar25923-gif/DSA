#include <iostream>
using namespace std;
int main() {
int n ; 
    int org = n ;
cout << " enter a number : ";
cin >> n ;
int digit; 
int pro = 1;
int sum = 0;
int diff;
while(n!=0){
    digit = n % 10 ;
    pro = pro * digit ;
    sum = sum + digit ; 
    n = n / 10 ;
}
diff = pro - sum ; 
cout << diff ;
} 
