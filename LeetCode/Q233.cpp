#include <iostream>

int main() {
        int n ; 
        std::cout << "enter a num : ";
        std::cin >> n ; 
        int org = n ;
        int digit = 0 ;
        int  count = 0 ; 
        while(n!=0){
            while(n!=0){
                digit = n % 10 ;
                if(digit == 1){
                    count++ ;
                }
                n = n / 10 ;
            }
            n = org - 1 ;
            org = n ;
        }
        std::cout<< count  
}