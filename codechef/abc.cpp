# include <bits/stdc++.h>  
using namespace std;  // kahi par thora gadbad ho raha hain sara cheez thick  hain bas aans nahi aa raha hain pata anahai kyun 
bool palindromecheck(string s, int i , int j ){
	if(s[i]==s[j]){
		return true ; 
	}
	if(i>j)
		return false;
	int lower =i ; 
	int heigher= j ; 
	while(lower<=heigher){
        if(s[lower]==s[heigher]){
        	lower++;
        	heigher--;
        }
        else return false; 

	}
	return true ; 

}
int solve(string s , int i ,int j ){
	if(i>=j)
		return 0 ;
	if(palindromecheck(s, i,j)==true){
		return 0 ; 
	}
	int temp  ; 
	// int ans=INT_MAX;
	for(int k =i ;  k<=j-1 ;k= k+2){
      temp= solve(s, i, k)+solve(s,k+1, j)+1;
	}
	int ans=INT_MAX;
	
	if(temp<ans){
		ans=temp;
		
	}
	// cout<<ans; 
	return ans ; 
}

int main(){
	// string s = "ababbbabbababa"; 
	string s = "aa";
	// cout<<palindromecheck(s ,0,8);
	int i=0 ; 
	int n = sizeof(s)/sizeof(s[0]);
	int j = n-1 ; 
	cout<<solve(s, i , j ); 
	cout<<"hello world ";

}






#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    while(t--){
    	int n ;
    	cin>>n ; 
    	int a[n]; 
    	for(int i=0 ; i<n ; i++){
    		cin>>a[i]; 
    	} 
        int b= a[0];
        int c =0 ; 
        for(int i =0 ; i<n ; i++){
           if(a[i]==b){
            c=c+1;
           }
        }
        if(c==n){
            if(c%2==0){
                cout<<c/2*a[0]<<endl;
            }
            else 
                cout<<c/2*a[0]+a[0]<<endl ;
        }
           
    }
    
    return 0 ;
}