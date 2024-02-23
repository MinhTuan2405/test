#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::vector ;


#define vi std::vector <int> 


// generate binary string with length = n ;

class generateBinary {
    private:
        int n ;
        vi bin_ ;
        bool final = false;
    public:
        void firstConfiguration  ( int length) {
            this -> n = length ;
            bin_.resize(n) ;
            for ( int &i : bin_) i = 0 ;
        }

        void nextConfiguration () {
            int i = n - 1 ;
            while ( i >= 0 && bin_.at(i) == 1 ) {
                bin_.at(i) = 0 ;
                --i ;
            }
            if ( i == -1) final = true ;
            else bin_.at(i) = 1 ;
        }

        // 

        void generate ( ) {
            while ( !final) {
                print() ;
                nextConfiguration() ;
            }

        }
        // print the current configuration 
        void print () {
            for ( int i : bin_) std::cout << i ; 
            std::cout << '\n' ;
        }

} ;
// ___________________________________________


// 

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr); 
    // std::cout.tie(nullptr);

    generateBinary binary ;
    binary.firstConfiguration ( 10) ;
    binary.generate() ;

    return true ;
}