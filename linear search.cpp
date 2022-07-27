#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int key){
	for(int i = 0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	int key;
	cout<<"Enter key to find : ";
	cin>>key;
	int a = linearSearch(arr,n,key);
	if(a==-1) cout<<"Key Not Found"<<endl;
	else cout<<"Key Found"<<endl;
	
}
