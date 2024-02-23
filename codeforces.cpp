#include <iostream>

int main(){

    long long k, n, w ;
    std::cin >> k >> n >> w ;

    double total = (double) ( w + 1 ) * ( (double) w / 2 ) * k ;

    if ( total <= n ) std::cout << 0 ;
    else {
        std::cout << total - n  ;
    }

    return 0;
}