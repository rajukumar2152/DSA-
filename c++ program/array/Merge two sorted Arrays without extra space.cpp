# include <bits/stdc++.h> 
using namespace std; 

void mergesortedarray(int a[] , int b[] , int n , int m ){
	// sort(a , a+n);
	// sort(b , b+n);
	// int k = min(n, m );             // tjora sa logic galat ban raha hain 
	for(int i=0 ; i< n ; i++){
		if(a[i]>b[0]){
			swap(a[i] , b[0] );
		}
		int first= b[0];
		for(int k =1 ; k<m&&b[k]<first   ; k++){
            if()
			}
        
    }
   }

int main(){
	// int arr[5]={1,9,6,8,13};
	// sort(arr , arr+5);
	// for(int i=0; i<5 ; i++){
	// 	cout<< arr[i]<< " ";
	// }


	// return 0 ; 
	int ar1[] = {1, 5, 9, 10, 15, 20}; 
    int ar2[] = {2, 3, 8, 13}; 
    int m = sizeof(ar1)/sizeof(ar1[0]); 
    int n = sizeof(ar2)/sizeof(ar2[0]); 
    mergesortedarray(ar1, ar2, m, n); 
  
    cout << "After Merging nFirst Array: "; 
    for (int i=0; i<m; i++) 
        cout << ar1[i] << " "; 
    cout << "nSecond Array: "; 
    for (int i=0; i<n; i++) 
        cout << ar2[i] << " "; 
   return 0; 
}