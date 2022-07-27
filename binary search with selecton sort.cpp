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
int selectionSort(int arr[],int n){
	int s,m;
	for(int i=0;i<n;i++){
		s = i;
		m = min(arr,n,s);
		swap(arr[s],arr[m]);
	}
	cout<<"After sorting"<<endl;
	for(int i= 0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
}
int binarySearch(int arr[],int n,int key){
	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==key) return mid;
		if(key<arr[mid])end = mid-1;
		if(key>arr[mid]) start = mid+1;	
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	selectionSort(arr,n);
	int key;
	cout<<"Enter Key to find"<<endl;
	cin>>key;
	int a = binarySearch(arr,n,key);
	if(a == -1) cout<<"Key Not Found"<<endl;
	else cout<<"Key Found at index number :  "<<a<<endl;
	
}
