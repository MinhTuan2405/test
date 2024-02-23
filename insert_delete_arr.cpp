#include <iostream>
#include <vector>

using std::vector;

vector <int> _INSERT_ ( vector <int> &a, vector <int> b, int pos){
	int oldSize = a.size() ;
	int newSize = a.size() + b.size() ;
	a.resize ( newSize) ;
	int temp = pos ;
	for ( int i = oldSize -1 ; i > pos; --i){
		a[i+b.size()] = a[i] ;
	}
	for ( int i = 0; i < b.size(); ++i){
		a[pos+1] = b[i] ;
		++pos ;
	}
	return a;

}

vector <int> _DELETE_ ( vector <int> &a, int left, int right) {
	int size = a.size() ;
	size = size - ( right - left + 1) ;
	while ( right + 1 < a.size()) {
		a[left] = a[right + 1] ;
		++left; ++right;
	}
	a.resize ( size) ;
	return a ;
}

int main(){
	vector <int> a ;
	int n;
	std::cin >> n ;
	a.resize ( n) ;
	for ( int &x : a ) std::cin >> x ;
	int k ;
	std::cin >> k ;
	if ( k == 0 ) {
		int left, right;
		std::cin >> left >> right ;
		_DELETE_ ( a, left, right) ;
		for ( int x : a )  std::cout << x << " " ;
	}
	if ( k == 1 ) {
		int m ; std::cin >> m ;
		vector <int> b (m, 0) ;
		for ( int &x : b ) std::cin >> x ;
		int pos; std::cin >> pos ;
		_INSERT_ ( a, b, pos );
		for ( int i : a ) std::cout << i << " " ;
	}
	return 0;
}
