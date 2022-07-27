#include<bits/stdc++.h>
using namespace std;
int min(int a[],int n,int s){
	int m = s;
	for(int j = s;j<n;j++){
		if(a[j]<a[m]){
			m = j;
		}
	}
	return m;
	
}
int main(){
	int n,s,m;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	
	for(int i=0;i<n;i++){
		s = i;
		m = min(arr,n,s);
		swap(arr[s],arr[m]);
	}
	cout<<"After sorting"<<endl;
	for(int i= 0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
	
}
