#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;


	while (t--) {
		int n , k ; 
		cin>>n>>k ; 

		int d=0; 
		for(int i=1 ; i<=n ; i++){
			d=d+1; 
		}
      cout<<d<<endl ;
	}
   return 0 ; 
}