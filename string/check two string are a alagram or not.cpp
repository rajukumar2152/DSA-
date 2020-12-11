#include <bits/stdc++.h> 
using namespace std; 

int main(){
	string s1 = "LISTEN";
	string s2 = "SILENT";
	sort(s1.begin() , s1.end());
	sort(s2.begin(), s2.end()); 
	int l = s1.length();
	int count =0 ; 
	for(int i=0 ; i<l ; i++){
		if(s1[i]==s2[i])
			count++;
	}
	if(count==s1.size())
		cout<<"strings are alangram of each another ";
	else
		cout<< "not alangram";


	return 0 ; 
}