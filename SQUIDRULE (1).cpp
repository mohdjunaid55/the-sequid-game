#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,sum=0;
	   cin>>n;
	   int arr[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   sort(arr,arr+n);
	   for(int i=1; i<n;i++)
	  sum=sum+arr[i];
	   cout<<sum<<endl;

}
}
