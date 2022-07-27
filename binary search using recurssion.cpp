#include<bits/stdc++.h>
#define int int64_t
#define array(n) new int[n];
using namespace std;

bool binarySearch(int arr[],int n,int key,int s,int e){
	int mid = s+(e-s)/2;
	if(n==0)
		return false;
	if(n==1)
		return arr[0]==key;
	if(s>e)
		return false;
	if(key==arr[mid])
		return true;
	else if(key>arr[mid]){
		s = mid+1;
		binarySearch(arr,n,key,s,e);
	}
	else{
		e = mid-1;
		binarySearch(arr,n,key,s,e);
	}
}

signed main(){
	int n,key;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0;i < n ; i++) cin >> arr[i];
	sort(arr,arr+n);
	cin >> key;
	int s = 0;
	int e = n-1;
	binarySearch(arr,n,key,s,e) ? cout<<"YES" : cout<<"NO";
	
}

