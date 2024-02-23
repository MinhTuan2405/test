#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std ;

using std::vector ;

#define vi std::vector <int> 

// find the first position of X in the array that is sorted 

int find ( vi a , int target, int first, int last ) {
    int mid = ( first + last ) / 2 + 1 ;
    if ( target >  a.at(mid)) return find ( a, target, mid + 1, last) ;
    else if (( target < a.at (mid))) return find ( a, target, first, mid - 1) ;
    else return mid ;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); 
    std::cout.tie(nullptr);

    vi a;
    int n ;
    std::cin >> n ;
    a.resize (n) ;
    for ( int &x : a ) std::cin >> x ;

    sort ( a.begin(), a.end()) ;
    int target ; std::cin >> target ;
    std::cout << find ( a , target, 0, n - 1) ;

    return 0;
}