// sieve the prime number in the range from 0 to 10e+6 ;

#include <iostream>
#include <vector>

#define N 1000000 // define the last number in this range 

using namespace std ;

int prime[N+1] ; // this array store number in this range so if its element value is 0 -> it is not a prime number and otherwise ;

void sieve () {
    for ( int i = 0; i <= N; ++i) prime[i] = 1 ; // all of the number is a prime number ;
    prime[0] = 0 ;
    prime[1] = 0 ;// 0 and 1 is not prime number ;

    for ( int i = 0; i <= 1000; ++i) { // the max value in this range depend on the value of square root N 
        if ( prime[i]){ // if i is a prime number, so we assign all the mutiplies of i with the 0 value ;
            for ( int j = i*i; j <= N; j += i) prime[j] = 0 ;
        }
    } 
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    int n ;
    std::cin >> n ;
    sieve() ;

    for ( int i = 0; i <= n; ++i) {
        if ( prime[i]) std::cout << i << " " ;
        
    }

    return 0;
} 