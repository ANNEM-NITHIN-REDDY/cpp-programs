#include<bits/stdc++.h>
#define int int64_t
using namespace std;

void digitToWord(string arr[],int n){
	if(n<=0)
		return ;
	int digit = n%10;
	n = n / 10;
	digitToWord(arr,n);
	cout << arr[digit] << " ";	
}

signed main(){
	int n;
	cin>>n;
	string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	digitToWord(arr,n);	
}

