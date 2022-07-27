#include<bits/stdc++.h>
using namespace std;
int max(int a[],int n){
	int max = a[0];
	for(int i =0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int n,t;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	t = max(arr,n);
	int a[t+1];
	for(int i = 0;i<t+1;i++){
		a[i] = 0;
	}
	for(int i =0 ;i<n;i++){
		a[arr[i]]++;
	}
	for(int i = 0;i<t+1;i++) cout<<a[i]<<" ";cout<<endl;;
	for(int i= 0;i<t+1;i++) {
		for(int j = 0;j<a[i];j++)
			cout<<i<<" ";
	}
}
