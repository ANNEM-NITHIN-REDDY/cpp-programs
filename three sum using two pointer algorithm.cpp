#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j,k;
	cin>>n;
	set< vector <int> > s;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	int sum;
	cout<<"Enter sum : ";
	cin>>sum;
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
		int temp1 = arr[i];
		j = i+1;
		k = n-1;
		while(j<k){
			if(arr[j]+arr[k]==sum-temp1){
				//cout<<temp<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
				vector<int> temp;
				temp.push_back(temp1);
				temp.push_back(arr[j]);
				temp.push_back(arr[k]);
				s.insert(temp);
				j++;k--;
			}
			else if(arr[j]+arr[k]<sum-temp1) j++;
			else k--;
		}
	}
	for(auto i:s){
		for(auto j : i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
