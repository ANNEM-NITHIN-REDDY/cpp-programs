#include<bits/stdc++.h>
#define int int64_t
#define array(n) new int[n];
using namespace std;

bool linearSearch(int *arr,int n,int key){
	if(n==0) return false;
	if(n==1){
		return arr[0] == key;
	}
	if(arr[0]==key){
		return true;
	}
	else{
		return linearSearch(arr+1,n-1,key);
	}
}

signed main(){
	int n,key;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0;i < n ; i++) cin >> arr[i];
	cin >> key;
	linearSearch(arr,n,key) ? cout<<"YES" : cout<<"NO";
	
}

