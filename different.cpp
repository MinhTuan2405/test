#include <iostream>
#include <vector> 

#define vi std::vector <int> 

void rotateleft ( vi &a, int n, int repeat ) {
    repeat = repeat % n ;
    int use = n - repeat ;
    vi b = a ;
    
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    vi a;
    int n ;
    std::cin >> n ;
    a.resize ( n) ;
    for ( int &x : a ) std::cin >> x ;
// using for loop with ( 0(n2))
    // for ( int i = 0; i < n; ++i ) {
    //     bool check = true ;
    //     for ( int j= 0; j < i; ++j ) {
    //         if (a[i] == a[j]) {
    //             check = false ;
    //             break;
    //         }
    //     }
    //     if ( check ) std::cout << a[i] ;
    // }

    // using marking array 

    int marking[10001] = {0} ; 
    for ( int i = 0; i < n; ++i ) {
            marking[a[i]] ++ ;
        
    }
    // marking all the elements of this array = 0 ; then check
    // if the a[i] int cnt = 0 print this value and increase it to 1 unit
    for ( int i = 0; i < 10001; ++i) { 
         if ( marking[i] != 0 ) {
            std::cout << i << " " << marking[i] ;
            std::cout << '\n' ;
         }
    }

    return 0;
}